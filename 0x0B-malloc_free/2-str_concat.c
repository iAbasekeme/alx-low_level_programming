#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* str_concat -  a function that concatenates two strings
* @s1: string to concatenate
* @s2: string to append
*
* Return: Always 0 (success)
*/
char *str_concat(char *s1, char *s2)
{
char *alloc;
int i, j = 0;
int count = 0;
int len;
if (!(s1 && s2))
{
return ("");
}
while (s1[count] && s2[j] != '\0')
{
count++;
j++;
}
len = count + j;
alloc = (char *)malloc((len + 1) * sizeof(char));
if (!alloc)
{
return (NULL);
}
i = 0;
j = 0;
while (s1[i] != '\0')
{
alloc[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
alloc[i] = s2[j];
i++;
j++;
}
alloc[i] = '\0';
return (alloc);
}
