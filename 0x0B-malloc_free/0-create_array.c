#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of chars to be initialized
 * @c: characers to be initialized
 *
 * Return: Always 0 (success)
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i = 0;
    if (size == 0)
    {
        return NULL;
    }
    char *array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
        return NULL;

    for (; i < size; i++)
    {
        array[i] = c;
    }
    return array;
}