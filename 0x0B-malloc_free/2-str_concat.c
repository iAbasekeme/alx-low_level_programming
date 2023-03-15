#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenants two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int n = 0;
	int u = 0;
	char *w;
	int l = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[n])
		n++;
	while (s2[u])
		u++;
	l = n + u;
	w = malloc(l * sizeof(char) + 1);
	if (w == NULL)
		return (NULL);
	u = 0;
	while (k < l)
	{
		if (k <= n)
			w[k] = s1[k];
		if (k >= n)
		{
			w[k] = s2[u];
			u++;
		}
		k++;
	}
	w[k] = '\0';
	return (w);
}
