#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of char
 * @size: size of array
 * @c: character to initialize
 *
 * Return: Array filled.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *d;

	if (size == 0)
		return (NULL);
	d = (char *)malloc(size * sizeof(unsigned int));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		d[i] = c;
	return (d);
}
