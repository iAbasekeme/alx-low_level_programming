#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 * @n: int to count
 *
 * Return: new space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int h = 0, y = 0, k = 0, i = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[h])
	{
		h++;
	}
	while (s2[y])
	{
		y++;
	}
	if (n >= y)
		k = h + y;
	else
		k = h + n;
	str = malloc(k * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	y = 0;
	while (i < k)
	{
		if (i <= h)
		{
			str[i] = s1[i];
		}
		if (i >= h)
		{
			str[i] = s2[y];
			y++;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
