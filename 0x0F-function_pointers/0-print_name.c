#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed
 * @f: pointer name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f = *name;
}
