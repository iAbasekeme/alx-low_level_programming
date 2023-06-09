#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be appended
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int len = 0;

    while (dest[len])
    {
        len++;
    }

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[len] = src[i];
        len++;
    }

    dest[len] = '\0';
    return (dest);
}