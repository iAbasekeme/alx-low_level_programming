#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory
 * @b: size to allocate
 *
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);

	if (g == NULL)
		exit(98);
	return (g);
}
