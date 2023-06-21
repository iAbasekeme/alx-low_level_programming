#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @f: the file to print
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
