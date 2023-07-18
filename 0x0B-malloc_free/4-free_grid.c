#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array
 * @grid: Grid property
 * @height: Grid row representing both row and column
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
    int i = 0;

    if (!grid)
        return;
    for (; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}
