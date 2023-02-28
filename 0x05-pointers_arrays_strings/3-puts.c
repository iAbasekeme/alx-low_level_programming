#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string to be printed
 *
 * Return: (0)
 */

void _puts(char *str)
{
	while(; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
