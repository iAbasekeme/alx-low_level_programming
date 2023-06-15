#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string to concatenate
 * @s2: second to be appended
 *
 * Return: Always 0 (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int s1_len = 0, s2_len = 0;
    char *ptr;

    if (!(s1 && s2))
    {
        return ("");
    }

    while (s1[s1_len] && s2[s2_len] != '\0')
    {
        s1_len++;
        s2_len++;
    }
    if (n >= s2[s2_len])
    {
        n = s2_len;
    }
    ptr = (char *)malloc((s1_len + n + 1) * sizeof(char));
    if (!ptr)
    {
        return(NULL);
    }
    unsigned int i = 0, j = 0;
    while (i < s1_len)
    {
        ptr[i] = s1[i];
        i++;
    }
    while (j < n && s2[j] != '\0')
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';

    return (ptr);
}
