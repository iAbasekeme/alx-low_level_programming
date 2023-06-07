#include "main.h"

/**
* _puts_recursion - a function to print a string followed by a newline
* @s: string to print
*
* Return: Always 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar("\n");
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
