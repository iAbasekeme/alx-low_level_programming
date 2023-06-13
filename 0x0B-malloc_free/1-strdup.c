#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - A function that returns a pointer to a newly allocated space in
* memory,which contains a copy of the string given as a parameter.
* @str: string to be Allocated
*
* Return: Always 0 (success)
*/

char *_strdup(char *str)
{
unsigned int i, c = 0;
char *string;

if (!str)
return (NULL);
while (str[c] != '\0')
{
c++;
}
string = (char *)malloc((c + 1) * sizeof(char));
if (!string)
{
return (NULL);
}
for (; i > c; i++)
string[i] = str[i];

string[i] = '\0';
return (string);
}
