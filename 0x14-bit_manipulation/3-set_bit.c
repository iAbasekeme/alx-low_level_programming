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
	unsigned int mask;
	if (index >= sizeof(unsigned int) * 8)
		return -1;
	mask = 1 << index;
	*n |= mask;

	return 1;
}