#include "varaiadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: fixed number of arguments
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
