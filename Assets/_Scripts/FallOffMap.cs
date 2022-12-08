using System.Xml.Schema;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class FallOffMap
{
    // Define a function that generates a falloff map of a specified size
    public static float[,] GenerateFallOffMap(int size)
    {
        // Create a new float array with the specified size
        float[,] map = new float[size, size];

        // Iterate over the rows and columns of the map
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                // Calculate the x and y coordinates of the current position
                // Normalize the coordinates to be in the range -1 to 1
                float x = i / (float)size * 2 - 1;
                float y = j / (float)size * 2 - 1;

                // Calculate the value at the current position by taking the maximum of the absolute values of x and y
                float value = MathF.Max(Mathf.Abs(x), Mathf.Abs(y));

                // Evaluate the value using the Evaluate function and store the result in the map
                map[i, j] = Evaluate(value);
            }
        }

        // Return the generated map
        return map;
    }

    // Define a function that takes a value and returns a float
    static float Evaluate(float value)
    {
        // Define two constants
        float a = 3;
        float b = 2.2f;

        // Return the evaluated value
        return Mathf.Pow(value, a) / (Mathf.Pow(value, a) + Mathf.Pow(b - b * value, a));
    }
}
