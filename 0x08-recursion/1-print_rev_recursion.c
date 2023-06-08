#include "main.h"

/**
 * _print_rev_recursion - a function that prints in reverse using recursion
 * @s: reversible string
 *
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
else
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
