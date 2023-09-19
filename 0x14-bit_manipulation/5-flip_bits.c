#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: input
 * @m: integer representing number of flips to make
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult = n ^ m, current;
	int count = 0, i = 0;

	for (i = 63; i >= 0; i--)
	{
		current = xorResult >>= 1;
		if (current & 1)
			count++;
	}
	return (count);
}
