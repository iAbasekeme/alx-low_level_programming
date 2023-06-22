#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: Argument
 *
 * Return: Always 0 (success)
 */
int sum_them_all(const unsigned int n, ...)
{
    int result = 0;
    unsigned int i = 0;
    va_list args;
    va_start(args, n);
    if (n == 0)
    {
        return (0);
    }

    for (i = 0; i < n; i++)
    {
        int num = va_arg(args, unsigned int);
        result += num;
    }
    va_end(args);
    return (result);
}
int main(void)
{
    int len = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d", len);
    return 0;
}