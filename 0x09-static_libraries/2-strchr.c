#include "main.h"

/**
 * *_strchr - a function that locates a character in a string.
 * @s: the string to be scanned
 * @c: character to be searched in the string
 *
 * Return: memory area replaced
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (*s);
        }
        s++;
    }
    if (c == '\0')
    {
        return (s);
    }
    return ('\0');
}