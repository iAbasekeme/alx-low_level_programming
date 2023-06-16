#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: Destination value
* @s2: source value
* @n: max number of char to be appended
* Return: Always 0 (success)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0;
unsigned int i = 0, j = 0;
unsigned int concat_len;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;
concat_len = (n >= s2_len) ? s2_len : n;

ptr = (char *)malloc((s1_len + concat_len + 1) * sizeof(char));
if (!ptr)
{
return NULL;
}
while (i < s1_len)
{
ptr[i] = s1[i];
i++;
}
for (; j < concat_len; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';

return ptr;
}
