#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory using malloc
* @b: size to be allocated
*
* Return: Always 0 (success)
*/
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = (void *)malloc(b);
if (!ptr)
{
exit(98);
}
return (ptr);
}
