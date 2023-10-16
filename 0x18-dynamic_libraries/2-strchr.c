#include "main.h"
/**
 * _strchr - unction that locates a character in a string.
 * @s: pointer pointing to string
 * @c: char character to search for
 *
 * Return: return null
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index] >= '\0')
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
		index++;
	}
	return (0);
}
