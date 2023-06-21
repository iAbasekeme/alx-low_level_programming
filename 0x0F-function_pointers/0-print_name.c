#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: Name of file to print
 * @f: the file to print
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
