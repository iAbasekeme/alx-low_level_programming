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
    unsigned int i;
    va_list args;
    va_start(args, format);

    char c;
    int i;
    float f;
    char *s;
    while (format[i] != '\0')
    {
        if (format[i] == 'c')
        {
            c = va_arg(args, char);
            printf("%c", c);
        }
        else if (format[i] == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
        }
        else if (format[i] == 'f')
        {
            f = va_arg(args, float);
            printf("%f", va_arg(args, float));
        }
        else if (format[i] == 's')
        {
            s = va_arg(args, char *);
            printf("%s", (s == NULL) ? "(nil)" : s);
        }
        i++;
    }
    va_end(args);
    printf("\n");
}