#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* string_nconcat - a function that concatenates two strings
* @s1: Destination value
* @s2: source value
* @n: max number of char to be appended
* Return: Always 0 (success)
*/
char *string_nconcat(const char *s1, const char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0;
char *ptr;

if (!(s1 && s2))
{
return NULL;
}
while (s1[s1_len] != '\0')
{
s1_len++;
}
while (s2[s2_len] != '\0' && s2_len < n)
{
s2_len++;
}
ptr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
if (!ptr)
{
return NULL;
}
unsigned int i = 0, j = 0;
  
while (i < s1_len)
{
ptr[i] = s1[i];
i++;
}
while (j < s2_len)
{
ptr[i] = s2[j];
i++;
j++;
}
ptr[i] = '\0';

return ptr;
}
