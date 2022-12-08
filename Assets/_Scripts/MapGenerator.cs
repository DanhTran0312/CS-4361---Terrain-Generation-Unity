using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading;
using System;

public class MapGenerator : MonoBehaviour
{
    public enum DrawMode
    {
        NoiseMap, // Draw a noise map
        ColorMap, // Draw a color map
        Mesh, // Draw a mesh
        FallOffMap // Draw a falloff map
    }

    public Noise.NormalizedMode normalizedMode; // The mode used to normalize the noise values

    public DrawMode drawMode; // The mode used to draw the map

    public const int mapChunkSize = 241; // The size of the map chunk

    [Range(0, 6)]
    public int detailLevelEditor; // The level of detail for the mesh

    public float noise; // The noise value for the map

    public int octaves; // The number of octaves for the noise

    public float peristance; // The persistence value for the noise

    public float lacunarity; // The lacunarity value for the noise

    public bool useFalloff; // Whether to use a falloff map

    public bool autoUpdate; // Whether to automatically update the map

    public float meshHeightScale; // The height scale for the mesh

    public int seed; // The seed for the map

    public Vector2 offset; // The offset for the map

    public TerrainType[] regions; // The regions for the map

    public AnimationCurve meshHeightCurve; // The height curve for the mesh

    float[,] falloffMap; // The falloff map

    Queue<MapThreadInfo<MapData>> mapThreadInfoQueue = new Queue<MapThreadInfo<MapData>>(); // A queue for storing map data thread information
    Queue<MapThreadInfo<MeshData>> meshDataThreadInfoQueue = new Queue<MapThreadInfo<MeshData>>(); // A queue for storing mesh data thread information

    void Awake()
    {
        falloffMap = FallOffMap.GenerateFallOffMap(mapChunkSize); // Generate a falloff map
    }

    public void DrawMap()
    {
        MapData mapData = GenerateMapData(Vector2.zero); // Generate the map data
        MapDisplay mdisplay = FindObjectOfType<MapDisplay>(); // Get the map display component

        if (drawMode == DrawMode.NoiseMap) // If the draw mode is set to noise map
            mdisplay.DrawMap(TextureGenerator.TextureFromNoiseMap(mapData.noiseMap)); // Draw the noise map
        else if (drawMode == DrawMode.ColorMap) // If the draw mode is set to color map
            mdisplay.DrawMap(
                TextureGenerator.TextureFromColorMap(mapData.colorMap, mapChunkSize, mapChunkSize)
            ); // Draw the color map
        else if (drawMode == DrawMode.Mesh) // If the draw mode is set to mesh
            mdisplay.DrawMesh(
                MeshGenerator.GenerateTerrainMesh(
                    mapData.noiseMap,
                    meshHeightScale,
                    meshHeightCurve,
                    detailLevelEditor
                ),
                TextureGenerator.TextureFromColorMap(mapData.colorMap, mapChunkSize, mapChunkSize)
            ); // Draw the mesh
        else if (drawMode == DrawMode.FallOffMap)
        { // If the draw mode is set to falloff map
            mdisplay.DrawMap(
                TextureGenerator.TextureFromNoiseMap(FallOffMap.GenerateFallOffMap(mapChunkSize))
            ); // Draw the falloff map
        }
    }

    public void RequestMapData(Vector2 center, Action<MapData> callback)
    {
        ThreadStart newThread = delegate
        {
            MapDataThread(center, callback);
        };
        new Thread(newThread).Start();
    }

    // Generate map data on a separate thread
    void MapDataThread(Vector2 center, Action<MapData> callback)
    {
        MapData mapData = GenerateMapData(center); // Generate the map data
        lock (mapThreadInfoQueue)
        {
            mapThreadInfoQueue.Enqueue(new MapThreadInfo<MapData>(callback, mapData)); // Add the map data to the queue
        }
    }

    public void RequestMeshData(MapData mapData, int lod, Action<MeshData> callback)
    {
        ThreadStart newThread = delegate
        {
            MeshDataThread(mapData, lod, callback);
        };
        new Thread(newThread).Start();
    }

    // Generate mesh data on a separate thread
    void MeshDataThread(MapData mapData, int lod, Action<MeshData> callback)
    {
        MeshData meshData = MeshGenerator.GenerateTerrainMesh(
            mapData.noiseMap,
            meshHeightScale,
            meshHeightCurve,
            lod
        );
        lock (meshDataThreadInfoQueue)
        {
            meshDataThreadInfoQueue.Enqueue(new MapThreadInfo<MeshData>(callback, meshData)); // Add the mesh data to the queue
        }
    }

    void Update()
    {
        // Process the map data queue
        if (mapThreadInfoQueue.Count > 0)
        {
            for (int i = 0; i < mapThreadInfoQueue.Count; i++)
            {
                MapThreadInfo<MapData> threadInfo = mapThreadInfoQueue.Dequeue();
                threadInfo.callback(threadInfo.parameter);
            }
        }

        // Process the mesh data queue
        if (meshDataThreadInfoQueue.Count > 0)
        {
            for (int i = 0; i < meshDataThreadInfoQueue.Count; i++)
            {
                MapThreadInfo<MeshData> threadInfo = meshDataThreadInfoQueue.Dequeue();
                threadInfo.callback(threadInfo.parameter);
            }
        }
    }

    MapData GenerateMapData(Vector2 center)
    {
        float[,] noiseMap = Noise.GenerateNoise(
            mapChunkSize,
            mapChunkSize,
            seed,
            noise,
            octaves,
            peristance,
            lacunarity,
            center + offset,
            normalizedMode
        );

        Color[] colorMap = new Color[mapChunkSize * mapChunkSize];
        for (int y = 0; y < mapChunkSize; y++)
        {
            for (int x = 0; x < mapChunkSize; x++)
            {
                if (useFalloff)
                {
                    noiseMap[x, y] = Mathf.Clamp01(noiseMap[x, y] - falloffMap[x, y]);
                }
                float currentHeight = noiseMap[x, y];
                for (int i = 0; i < regions.Length; i++)
                {
                    if (currentHeight >= regions[i].height)
                    {
                        colorMap[y * mapChunkSize + x] = regions[i].color;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        return new MapData(noiseMap, colorMap);
    }

    void OnValidate()
    {
        if (lacunarity < 1)
            lacunarity = 1;
        if (octaves < 1)
            octaves = 1;

        falloffMap = FallOffMap.GenerateFallOffMap(mapChunkSize);
    }

    struct MapThreadInfo<T>
    {
        public readonly Action<T> callback;
        public readonly T parameter;

        public MapThreadInfo(Action<T> callback, T parameter)
        {
            this.callback = callback;
            this.parameter = parameter;
        }
    }
}

// Structure to store information about a terrain region, including its name, height, color, and texture
[System.Serializable]
public struct TerrainType
{
    public string name; // The name of the terrain region
    public float height; // The height at which the terrain region starts
    public Color color; // The color of the terrain region
    public GameObject terrainTexture; // The texture to use for the terrain region
}

// Structure to store the noise map and color map generated by the map generator
public struct MapData
{
    public readonly float[,] noiseMap; // The noise map
    public readonly Color[] colorMap; // The color map

    public MapData(float[,] noiseMap, Color[] colorMap)
    {
        this.noiseMap = noiseMap;
        this.colorMap = colorMap;
    }
}
