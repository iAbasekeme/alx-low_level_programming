#include "main.h"

/**
 * _print_rev_recursion - adds a program that prints a string in reverse.
 * @s: string to be reversed
 *
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
