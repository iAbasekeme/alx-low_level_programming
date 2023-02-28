#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: length of string to be printed.
 *
 * return: string length
 */
int _strlen(char *s)
{
	char str[] = *s;

	int length = 0;

	length = strlen(str);

	return (length);
}
