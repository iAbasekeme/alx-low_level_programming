#include "main.h"

/**
 * _strlen_recursion - claculate the length of a string
 * @s: string to be calculated
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1));
}
