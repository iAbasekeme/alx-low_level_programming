#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: String to be printed between numbers
 * @n: number of arguments passed to the function
 *
 * Return: Always 0 (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;

va_list args;
va_start(args, n);

for (; i < n; i++)
{
int num = va_arg(args, unsigned int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
