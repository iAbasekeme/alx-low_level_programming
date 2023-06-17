#include "main.h"
#include <stdlib.h>

/**
* _memset - a function that copies memory area.
* @s: memory area to fill
* @b: constant byte to fill
* @n: bytes of memory area to fill
*
* Return: the memory area filled
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

/**
* _calloc- A function that allocates memory for an array
* @nmemb: the number of bytes to allocate
* @size: the size of the array
*
* Return: Always 0 (success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if ((nmemb == 0) && size == 0)
{
return (NULL);
}
ptr = (char *)malloc(nmemb * size);
if (ptr != NULL)
{
_memset(ptr, 0, nmemb * size);
}
else
{
return (NULL);
}
return (ptr);
}
