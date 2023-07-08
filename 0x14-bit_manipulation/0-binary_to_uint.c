#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int
 * @b: A string containing the binary number
 * Return: The converted number in unit
 */
unsigned int binary_to_uint(const char *b)
{
	int length;
	int i;
	unsigned int result = 0;
	unsigned int base = 1;

	if (!b)
		return (0);
	while (b)
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			result += base;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		base *= 2;
	}
	return (result);
}
