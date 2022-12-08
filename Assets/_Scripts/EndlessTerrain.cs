using System.Security.AccessControl;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public class EndlessTerrain : MonoBehaviour
{
    // The scale factor for the terrain
    const float scale = 2f;

    // The details level for each LOD
    public LODInfo[] detailsLevel;

    // The maximum distance from the camera at which a chunk will be updated
    const float chunkUpdateThreshold = 25f;

    // The square of the chunk update threshold, used for performance optimization
    const float sqrChunkUpdateThreshold = chunkUpdateThreshold * chunkUpdateThreshold;

    // The transform of the camera
    public Transform viewer;

    // The maximum distance from the camera at which a chunk is visible
    public static float maxViewDistance;

    // A reference to the MapGenerator script
    static MapGenerator mapGenerator;

    // The material to use for the terrain
    public Material mapMaterial;

    // The current position of the camera
    public static Vector2 viewerPosition;

    // The previous position of the camera
    Vector2 viewerPositionOld;

    // The size of a chunk
    int chunkSize;

    // The number of chunks visible in the view of the camera
    int chunkVisibleInView;

    // A dictionary containing the currently active terrain chunks, indexed by their coordinates
    Dictionary<Vector2, TerrainChunk> terrainChunkDictionary =
        new Dictionary<Vector2, TerrainChunk>();

    // A list of the terrain chunks that were last visible to the camera
    static List<TerrainChunk> lastVisibleTerrain = new List<TerrainChunk>();

    void Start()
    {
        // Get a reference to the MapGenerator script
        mapGenerator = FindObjectOfType<MapGenerator>();
        // Set the maximum view distance to the visible threshold of the highest LOD
        maxViewDistance = detailsLevel[detailsLevel.Length - 1].visibleThreshold;
        // Set the chunk size to the size of the map chunks minus one (to account for overlapped chunks)
        chunkSize = MapGenerator.mapChunkSize - 1;
        // Calculate the number of chunks visible in the view of the camera
        chunkVisibleInView = Mathf.RoundToInt(maxViewDistance / chunkSize);
        // Update the visible chunks
        UpdateVisibleChunk();
    }

    void Update()
    {
        // Update the viewer position to the current position of the camera
        viewerPosition = new Vector2(viewer.position.x, viewer.position.z) / scale;
        // If the camera has moved far enough, update the visible chunks
        if ((viewerPositionOld - viewerPosition).sqrMagnitude > sqrChunkUpdateThreshold)
        {
            viewerPositionOld = viewerPosition;
            UpdateVisibleChunk();
        }
    }

    void UpdateVisibleChunk()
    {
        // Set the previously visible chunks to invisible
        for (int i = 0; i < lastVisibleTerrain.Count; i++)
        {
            lastVisibleTerrain[i].SetVisible(false);
        }
        // Clear the list of previously visible chunks
        lastVisibleTerrain.Clear();

        // Calculate the coordinates of the chunk that the camera is currently viewing
        int currentChunkCoordX = Mathf.RoundToInt(viewerPosition.x / chunkSize);
        int currentChunkCoordY = Mathf.RoundToInt(viewerPosition.y / chunkSize);

        // Iterate over the chunks in a square around the current chunk
        for (int yOffset = -chunkVisibleInView; yOffset <= chunkVisibleInView; yOffset++)
        {
            for (int xOffset = -chunkVisibleInView; xOffset <= chunkVisibleInView; xOffset++)
            {
                // Calculate the coordinates of the current chunk
                Vector2 viewedChunkCoord = new Vector2(
                    currentChunkCoordX + xOffset,
                    currentChunkCoordY + yOffset
                );
                // If the dictionary already contains a chunk at these coordinates, update it
                if (terrainChunkDictionary.ContainsKey(viewedChunkCoord))
                {
                    terrainChunkDictionary[viewedChunkCoord].UpdateTerrainChunk();
                }
                // Otherwise, create a new chunk at these coordinates
                else
                {
                    terrainChunkDictionary.Add(
                        viewedChunkCoord,
                        new TerrainChunk(
                            viewedChunkCoord,
                            chunkSize,
                            detailsLevel,
                            transform,
                            mapMaterial
                        )
                    );
                }
            }
        }
    }

    public class TerrainChunk
    {
        // The coordinates of this chunk
        Vector2 position;

        // The GameObject that represents this chunk
        GameObject meshObject;

        // The bounds of this chunk
        Bounds bounds;

        // The MeshRenderer, MeshCollider, and MeshFilter components of this chunk
        MeshRenderer meshRenderer;
        MeshCollider meshCollider;
        MeshFilter meshFilter;

        // The LOD info for this chunk
        LODInfo[] detailsLevel;

        // The LOD meshes for this chunk
        LODMesh[] lodMeshes;

        // The map data for this chunk
        MapData mapData;

        // A flag indicating whether the map data has been received
        bool mapDataReceived;

        // The index of the previously active LOD
        int prevLODIndex = -1;

        // Constructor for a new TerrainChunk
        public TerrainChunk(
            Vector2 coord, // coordinates of the terrain chunk
            int size, // size of the terrain chunk
            LODInfo[] detailsLevel, // details level for the terrain chunk
            Transform parent, // parent object for the terrain chunk
            Material material // material to use for rendering the terrain chunk
        )
        {
            // Store the details level for this terrain chunk
            this.detailsLevel = detailsLevel;

            // Calculate the position of the terrain chunk based on its coordinates and size
            position = coord * size;

            // Create a bounding box for the terrain chunk
            bounds = new Bounds(position, Vector2.one * size);

            // Convert the Vector2 position to a Vector3
            Vector3 positionV3 = new Vector3(position.x, 0, position.y);

            // Create a new GameObject for the terrain chunk
            meshObject = new GameObject("Terrain Chunk");

            // Add a mesh renderer, filter, and collider to the GameObject
            meshRenderer = meshObject.AddComponent<MeshRenderer>();
            meshFilter = meshObject.AddComponent<MeshFilter>();
            meshCollider = meshObject.AddComponent<MeshCollider>();

            // Set the material for the mesh renderer
            meshRenderer.material = material;

            // Set the position, parent, and scale of the GameObject
            meshObject.transform.position = positionV3 * scale;
            meshObject.transform.parent = parent;
            meshObject.transform.localScale = Vector3.one * scale;

            // Set the initial visibility of the GameObject to false
            SetVisible(false);

            // Initialize the array of LODMesh objects
            lodMeshes = new LODMesh[detailsLevel.Length];
            for (int i = 0; i < detailsLevel.Length; i++)
            {
                // Create a new LODMesh object and add it to the array
                lodMeshes[i] = new LODMesh(detailsLevel[i].lod, UpdateTerrainChunk);
            }

            // Request map data from the map generator
            mapGenerator.RequestMapData(position, OnMapDataReceived);
        }

        public void OnMapDataReceived(MapData mapData)
        {
            // Store the map data and set the map data received flag to true
            this.mapData = mapData;
            mapDataReceived = true;

            // Generate a texture from the map data's color map
            Texture2D texture = TextureGenerator.TextureFromColorMap(
                mapData.colorMap,
                MapGenerator.mapChunkSize,
                MapGenerator.mapChunkSize
            );

            // Set the main texture of the mesh renderer to the generated texture
            meshRenderer.material.mainTexture = texture;

            // Update the terrain chunk using the new map data
            UpdateTerrainChunk();
        }

        // Method to update the terrain chunk
        public void UpdateTerrainChunk()
        {
            // Check if the map data has been received
            if (mapDataReceived)
            {
                // Calculate the distance from the nearest viewer to the terrain chunk
                float neareastViewerDistance = Mathf.Sqrt(bounds.SqrDistance(viewerPosition));

                // Check if the terrain chunk is within the maximum view distance
                bool visible = neareastViewerDistance <= maxViewDistance;

                // If the terrain chunk is visible, determine the level of detail to use
                if (visible)
                {
                    // Default to the first level of detail
                    int lodIndex = 0;

                    // Loop through the levels of detail (except the last one)
                    for (int i = 0; i < detailsLevel.Length - 1; i++)
                    {
                        // If the distance is greater than the visible threshold for this level of detail,
                        // use the next level of detail
                        if (neareastViewerDistance > detailsLevel[i].visibleThreshold)
                        {
                            lodIndex = i + 1;
                        }
                        // Otherwise, use the current level of detail and stop checking
                        else
                        {
                            break;
                        }
                    }

                    // If the selected level of detail is different from the previous level of detail,
                    // update the mesh and collider to use the new level of detail
                    if (lodIndex != prevLODIndex)
                    {
                        LODMesh lodMesh = lodMeshes[lodIndex];
                        if (lodMesh.hasMesh)
                        {
                            prevLODIndex = lodIndex;
                            meshFilter.mesh = lodMesh.mesh;
                            meshCollider.sharedMesh = lodMesh.mesh;
                        }
                        // If the mesh for the new level of detail has not been generated yet,
                        // request it from the LODMesh object
                        else if (!lodMesh.hasRequestedMesh)
                        {
                            lodMesh.RequestMesh(mapData);
                        }
                    }

                    // Add the terrain chunk to the list of last visible terrain chunks
                    lastVisibleTerrain.Add(this);
                }

                // Set the visibility of the terrain chunk
                SetVisible(visible);
            }
        }

        // Method to set the visibility of the terrain chunk
        public void SetVisible(bool visible)
        {
            // Set the active state of the terrain chunk's GameObject
            meshObject.SetActive(visible);
        }

        // Method to check if the terrain chunk is visible
        public bool IsVisible()
        {
            // Return the active state of the terrain chunk's GameObject
            return meshObject.activeSelf;
        }
    }

    // This class represents a mesh for a given level of detail (LOD)
    class LODMesh
    {
        // The actual mesh
        public Mesh mesh;

        // Whether a request for the mesh data has been made
        public bool hasRequestedMesh;

        // Whether the mesh data has been received
        public bool hasMesh;

        // The LOD level for this mesh
        int lod;

        // A callback to be invoked when the mesh data has been received
        System.Action updateCallback;

        // Constructor for LODMesh
        public LODMesh(int lod, System.Action updateCallback)
        {
            this.lod = lod;
            this.updateCallback = updateCallback;
        }

        // This method is called when the mesh data has been received
        void OnMeshDataReceived(MeshData meshData)
        {
            // Create the mesh from the received data
            mesh = meshData.CreateMesh();

            // Set the flag to indicate that the mesh data has been received
            hasMesh = true;

            // Invoke the callback
            updateCallback();
        }

        // This method is called to request the mesh data
        public void RequestMesh(MapData mapData)
        {
            // Set the flag to indicate that a request has been made
            hasRequestedMesh = true;

            // Request the mesh data from the map generator
            mapGenerator.RequestMeshData(mapData, lod, OnMeshDataReceived);
        }
    }

    // This struct contains information about a level of detail
    [System.Serializable]
    public struct LODInfo
    {
        // The LOD level
        public int lod;

        // The distance at which the LOD should be visible
        public float visibleThreshold;
    }
}
