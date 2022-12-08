using System;
using UnityEngine;

public static class Noise
{
    // Enum to specify whether the noise map should be normalized globally or locally.
    public enum NormalizedMode
    {
        Local,
        Global
    }

    // Generates a noise map using Perlin noise.
    //
    // width: The width of the noise map.
    // height: The height of the noise map.
    // seed: The seed to use for the random number generator.
    // noise: The amount of noise to apply.
    // octaves: The number of octaves to use.
    // persistence: The persistence of the noise.
    // lacunarity: The lacunarity of the noise.
    // offset: The offset to apply to the noise.
    // mode: The normalization mode to use for the noise map.
    public static float[,] GenerateNoise(
        int width,
        int height,
        int seed,
        float noise,
        int octaves,
        float persistence,
        float lacunarity,
        Vector2 offset,
        NormalizedMode mode
    )
    {
        // Create the noise map.
        float[,] noiseMap = new float[width, height];

        // Keep track of the minimum and maximum noise values.
        float maxNoise = float.MinValue;
        float minNoise = float.MaxValue;

        // Create a random number generator.
        System.Random prng = new System.Random(seed);

        // Calculate the half-width and half-height of the noise map.
        float halfWidth = width / 2f;
        float halfHeight = height / 2f;

        // Calculate the maximum possible height of the noise map.
        float maxPossibleHeight = 0;
        float amplitude = 1;
        float frequency = 1;

        // Generate the octave offsets.
        Vector2[] octaveOffsets = new Vector2[octaves];
        for (int i = 0; i < octaves; i++)
        {
            float offsetX = prng.Next(-100000, 100000) + offset.x;
            float offsetY = prng.Next(-100000, 100000) - offset.y;
            octaveOffsets[i] = new Vector2(offsetX, offsetY);

            maxPossibleHeight += amplitude;
            amplitude *= persistence;
        }

        // Make sure that the noise value is not zero or negative, to prevent division by zero.
        if (noise <= 0)
            noise = 0.0001f;

        // Generate the noise map.
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                // Reset the amplitude and frequency for each sample.
                amplitude = 1;
                frequency = 1;
                float noiseHeight = 0;

                // Generate the octave values.
                for (int i = 0; i < octaves; i++)
                {
                    // Calculate the sample coordinates.
                    float sampleX = (x - halfWidth + octaveOffsets[i].x) / noise * frequency;
                    float sampleY = (y - halfHeight + octaveOffsets[i].y) / noise * frequency;

                    // Generate the noise using Perlin noise.
                    float noiseValue = Mathf.PerlinNoise(sampleX, sampleY) * 2 - 1;
                    // Add the value to the final noise height.
                    noiseHeight += noiseValue * amplitude;

                    // Update the amplitude and frequency for the next octave.
                    amplitude *= persistence;
                    frequency *= lacunarity;
                }

                // Keep track of the minimum and maximum noise heights.
                if (noiseHeight > maxNoise)
                {
                    maxNoise = noiseHeight;
                }
                else if (noiseHeight < minNoise)
                {
                    minNoise = noiseHeight;
                }

                // Save the noise height in the noise map.
                noiseMap[x, y] = noiseHeight;
            }
        }

        // Normalize the noise map.
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                if (mode == NormalizedMode.Local)
                {
                    // Normalize the noise height using the min and max values.
                    noiseMap[x, y] = Mathf.InverseLerp(minNoise, maxNoise, noiseMap[x, y]);
                }
                else
                {
                    // Normalize the noise height by the maximum possible value.
                    float normalizedHeight = (noiseMap[x, y] + 1) / (maxPossibleHeight);
                    // Clamp the value to 0 and int.MaxValue.
                    noiseMap[x, y] = Mathf.Clamp(normalizedHeight, 0, int.MaxValue);
                }
            }
        }

        return noiseMap;
    }
}
