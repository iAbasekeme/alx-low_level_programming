#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: binary number
 *
 * Return: new number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, i;
	unsigned int len = strlen(b);
	if (!b)
		return (0);

	result = 0;
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			result += 1 << (len - 1 - i);
	}
	return (result);
}
