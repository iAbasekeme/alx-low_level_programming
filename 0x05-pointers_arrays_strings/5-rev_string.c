#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
