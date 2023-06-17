#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers.
 * @height: row size
 * @width: column size
 *
 * Return: Always 0 (success)
 */

int **alloc_grid(int width, int height)
{
    int **grid;
    int i;
    int j;

    if (width <= 0 || height <= 0)
        return (NULL);
    grid = (int **)malloc(height * sizeof(int *));
    if (!grid)
        return (NULL);
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)calloc(width, sizeof(int));
        if (!grid[i])
        {
            for (j = i - 1; j >= 0; j--)
            {
                free(grid[j]);
            }
            free(grid);
            return (NULL);
        }
    }
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }
    return (grid);
}
