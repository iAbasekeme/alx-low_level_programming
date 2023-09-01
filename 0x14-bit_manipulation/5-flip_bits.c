#include "main.h"
#include <stdio.h>

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: input
 * @m: integer representing number of flips to make
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xorResult = n ^ m;
	int count = 0;

	while (xorResult > 0)
	{
		if (xorResult & 1)
			count++;
		xorResult >>= 1;
	}
	return (count);
}
