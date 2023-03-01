#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: length of string to be printed.
 *
 * return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
