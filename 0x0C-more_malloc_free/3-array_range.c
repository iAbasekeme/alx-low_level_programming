#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @max: max range
 * @min: min range
 *
 * Return: Always 0 (success)
 */
int *array_range(int min, int max)
{
int i = 0;
int length;

int *arr;
if (min > max)
{
return (NULL);
}
length = max - min + 1;
arr = malloc(length * sizeof(int));

if (arr == NULL)
{
return (NULL);
}
for (; i < length; i++)
{
arr[i] = min + i;
}
return (arr);
}
