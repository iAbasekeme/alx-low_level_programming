#include "search_algos.h"
/**
 * Binery_search -  A fucntion that searches for a value
 * in an array of integers using
 * the linear searc algorithm
 * @aaray: First element in the array
 * @size: size of the array
 * @value: searched vlue
 *
 * Return: Value if found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    if (array != NULL)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array [%ld] = [%d]\n", i, array[i]);
            if (array[i] == value)
            {
                return (i);
            }
        }
    }
    return (-1);
}
