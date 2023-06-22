#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: array to be iterated over
 * @size: Size of array
 * @cmp: pointer to the used function
 *
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;
    if (array != NULL && size != 0 && cmp != NULL)
    {
        if (size <= 0)
        {
            return (-1);
        }
        if (size > 0)
        {
            for (; i < size; i++)
            {
                if (cmp(array[i]) != 0)
                    return (i);
            }
        }
    }
    return (-1);
}
