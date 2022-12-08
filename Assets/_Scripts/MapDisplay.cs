using System.Collections;
using UnityEngine;

public class MapDisplay : MonoBehaviour
{
    // Declare a reference to a renderer component that will be used to render a texture
    public Renderer textureRender;

    // Declare a reference to a mesh filter component that will be used to display a mesh
    public MeshFilter meshFilter;

    // Declare a reference to a mesh renderer component that will be used to render the mesh
    public MeshRenderer meshRenderer;

    // Define a function that takes a Texture2D as an input and displays it on the texture renderer
    public void DrawMap(Texture2D texture)
    {
        // Set the texture of the material of the texture renderer to the texture passed as an input
        textureRender.sharedMaterial.mainTexture = texture;

        // Set the local scale of the texture renderer to match the width and height of the texture
        textureRender.transform.localScale = new Vector3(texture.width, 1, texture.height);
    }

    // Define a function that takes a MeshData and a Texture2D as inputs and displays the mesh and texture
    public void DrawMesh(MeshData meshData, Texture2D texture)
    {
        // Set the mesh of the mesh filter to a new mesh generated using the MeshData passed as an input
        meshFilter.sharedMesh = meshData.CreateMesh();

        // Set the texture of the material of the mesh renderer to the texture passed as an input
        meshRenderer.sharedMaterial.mainTexture = texture;
    }
}
