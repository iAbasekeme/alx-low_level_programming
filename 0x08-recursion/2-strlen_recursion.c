#include "main.h"

/**
 * _strlen_recursion - A function to determine the
 * length of a string using recursion
 *
 * @s - Recountable string
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    int sum = 1;

    if (*s == '\0')
        return (0);
    return (_strlen_recursion(s + 1) + sum);
}