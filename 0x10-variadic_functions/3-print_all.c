#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: the format string
 *
 * Return: Always 0 (success).
 */
void print_all(const char *const format, ...)
{
    va_list args;
    va_start(args, format);

    char c;
    int i;
    float f;
    char *s;

    int index = 0;
    while (format[index] != '\0')
    {
        if (format[index] == 'c')
        {
            c = (char)va_arg(args, int);
            printf("%c", c);
        }
        else if (format[index] == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
        }
        else if (format[index] == 'f')
        {
            f = (double)va_arg(args, double);
            printf("%f", f);
        }
        else if (format[index] == 's')
        {
            s = va_arg(args, char *);
            printf("%s", (s == NULL) ? "(nil)" : s);
        }
        index++;
    }
    va_end(args);
    printf("\n");
}