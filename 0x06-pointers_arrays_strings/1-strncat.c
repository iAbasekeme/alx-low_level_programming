#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: destination value
 * @src: source value
 * @n: max number of char to be appended
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int j = 0;

	while (dest[count])
	{
		count++;
	}
	while (j < n)
	{
		dest[count] = src[j];
		count++;
		j++;
	}
	dest[count + 1] = '\0';
	return (dest);
}
