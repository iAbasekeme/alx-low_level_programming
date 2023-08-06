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
	unsigned int result = 0;
	int len = 0;
	int index = 0;
	int i;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			result += 1 << index;
		}
		index++;
	}
	return (result);
}