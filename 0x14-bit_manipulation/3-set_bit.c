#include "main.h"

/**
 * set_bit - A function that sets a bit at an index
 * @n: number
 * @index: the index to be set
 *
 * Return: 1 on success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
