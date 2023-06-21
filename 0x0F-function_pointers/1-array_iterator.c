#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: array to iterate over
 * @size: size of the array
 * @action: callback pointer to the usable function
 *
 * Return: Always 0 (success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array && size)
    {
        size_t i = 0;
        for (; i < size; i++)
        {
            action(array[i]);
        }
    }
}
