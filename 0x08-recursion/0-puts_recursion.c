#include "main.h"

/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line
 * @s: string to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*p);
	_puts_recursion(p + 1);
}
