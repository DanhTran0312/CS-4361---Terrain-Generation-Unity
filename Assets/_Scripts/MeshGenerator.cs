using System.Net.Http;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Define a static class called MeshGenerator
public static class MeshGenerator
{
    // Define a static function that generates a terrain mesh from a noise map
    public static MeshData GenerateTerrainMesh(
        float[,] noiseMap, 
        float heightScale, 
        AnimationCurve _meshCurve, 
        int detailLevel)
    {
        // Get the width and height of the noise map
        int width = noiseMap.GetLength(0);
        int height = noiseMap.GetLength(1);

        // Calculate the x and z coordinates of the top left corner of the mesh
        float topLeftX = (width - 1) / -2f;
        float topLeftZ = (height - 1) / 2f;

        // Create a new AnimationCurve from the provided curve
        AnimationCurve curve = new AnimationCurve(_meshCurve.keys);

        // Calculate the number of vertices per line in the mesh
        int meshSimpleIncrement = (detailLevel == 0) ? 1 : detailLevel * 2;
        int verticesPerLine = (width - 1) / meshSimpleIncrement + 1;

        // Create a new MeshData object with the specified dimensions
        MeshData meshData = new MeshData(width, height);

        // Create a variable to keep track of the current vertex index
        int vertexIndex = 0;

        // Iterate over the rows and columns of the mesh
        for (int y = 0; y < height; y += meshSimpleIncrement)
        {
            for (int x = 0; x < width; x += meshSimpleIncrement)
            {
                // Calculate the position, UV coordinates, and triangles for the current vertex
                meshData.vertices[vertexIndex] = new Vector3(
                    topLeftX + x, 
                    curve.Evaluate(noiseMap[x, y]) * heightScale, 
                    topLeftZ - y);
                meshData.uvs[vertexIndex] = new Vector2(x / (float)width, y / (float)height);

                // Add triangles for the current vertex if it is not on the last row or column
                if (x < width - 1 && y < height - 1)
                {
                    meshData.AddTriangle(vertexIndex, vertexIndex + verticesPerLine + 1, vertexIndex + verticesPerLine);
                    meshData.AddTriangle(vertexIndex + verticesPerLine + 1, vertexIndex, vertexIndex + 1);
                }

                // Increment the vertex index
                vertexIndex += 1;
            }
        }

        // Return the generated mesh data
        return meshData;
    }
}

// Define a class called MeshData
public class MeshData
{
    // Declare arrays to store the mesh's vertices, triangles, and UV coordinates
    public Vector3[] vertices;
    public int[] triangles;
    public Vector2[] uvs;

    // Create a variable to keep track of the current triangle index
    int triangleIndex;

    // The constructor for the MeshData class takes the mesh's width and height as arguments, and initializes the arrays to the appropriate sizes.
    public MeshData(int meshWidth, int meshHeight) {
        vertices = new Vector3[meshWidth*meshHeight];
        uvs = new Vector2[meshWidth*meshHeight];
        triangles = new int[((meshWidth-1)*(meshHeight-1) *6)];
    }

    // The method 'AddTriangle' adds a triangle to the 'triangles' array, and increments the 'triangleIndex' variable.
    public void AddTriangle(int a, int b, int c){
        triangles[triangleIndex] = a;
        triangles[triangleIndex+1] = b;
        triangles[triangleIndex+2] = c;
        triangleIndex +=3;
    }

    // The method 'CreateMesh' creates a new Mesh object, sets its vertices, triangles, and UV coordinates to the values in the corresponding arrays, and returns the Mesh.
    public Mesh CreateMesh(){
        Mesh mesh = new Mesh();
        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.uv = uvs;
        mesh.RecalculateNormals();
        return mesh;
    }
}
