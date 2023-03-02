#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: destination value
 * @src: source value
 * @n: max num of characters to be appended
 *
 * Return: pointer to string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0;
	int j = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while (j < n && src[j])
	{
		dest[dest + j] = src[j];
	}
	while (j < n)
	{
		dest[dest + j] = '\0';
	}
	return (dest);
}
