#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory
 * @str: copy of string
 *
 * Return: a pointer to str
 */
char *_strdup(char *str)
{
	char *d;
	int i = 1;
	int a = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	d = malloc(i * sizeof(char) + 1);
	if (d == NULL)
		return (NULL);
	while (a < i)
	{
		d[a] = str[a];
		a++;
	}
	d[a] = '\0';
	return (d);
}
