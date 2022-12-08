using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class TextureGenerator
{
    // Generate a texture from a color map
    public static Texture2D TextureFromColorMap(Color[] colorMap, int width, int height)
    {
        // Create a new Texture2D object with the specified dimensions
        Texture2D texture = new Texture2D(width, height);

        // Set the filter mode and wrap mode of the texture
        texture.filterMode = FilterMode.Point;
        texture.wrapMode = TextureWrapMode.Clamp;

        // Set the colors of the texture from the color map
        texture.SetPixels(colorMap);

        // Apply the changes to the texture
        texture.Apply();

        // Return the texture
        return texture;
    }

    // Generate a texture from a noise map
    public static Texture2D TextureFromNoiseMap(float[,] noiseMap)
    {
        // Calculate the width and height of the noise map
        int width = noiseMap.GetLength(0);
        int height = noiseMap.GetLength(1);

        // Create a new Texture2D object with the dimensions of the noise map
        Texture2D texture = new Texture2D(width, height);

        // Create an array of colors, to be used to set the colors of the texture
        Color[] colorMap = new Color[width * height];

        // Loop through the noise map, setting the colors of the texture
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                // Calculate the color for this point in the noise map by linearly interpolating between black and white
                // based on the noise value at this point
                colorMap[y * width + x] =
                    Color.Lerp(Color.black, Color.white, noiseMap[x, y]);
            }
        }

        // Call the TextureFromColorMap method to create a texture from the color map, and return the resulting texture
        return TextureFromColorMap(colorMap, width, height);
    }
}
