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

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0')
			result = result << 1;
		else if (b[i] == '1')
			result = (result << 1) | 1;
		else
			return (0);
		b++;
	}
	return (result);
}
