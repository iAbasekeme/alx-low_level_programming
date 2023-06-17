#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
int i = 0;
int j = 0;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (!grid)
return (NULL);

for (; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
}
if (!grid[i])
{
for (; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
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
