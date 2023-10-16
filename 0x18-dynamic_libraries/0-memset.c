#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer pointing to the string
 * @b: pointer pointing to 'index'
 * @n: maximum number of character
 *
 * Return: return pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}
