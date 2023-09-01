#include "main.h"
#include "stdio.h"

/**
 * binary_to_uint - A function that coverts from binary
 * to unsigned integer.
 * @b: binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	while (b[i] != '\0')
	{
		result = result * 2 + (b[i] - '0');
		i++;
	}
	return (result);
}
