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
	int i = 0;
	unsigned long int d = n ^ m;

	while (d)
	{
		i++;
		d &= (d - 1);
	}

	return (i);
}
