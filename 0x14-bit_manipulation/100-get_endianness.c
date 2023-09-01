#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks endianness
 *
 * Return: 0 if big endian, otherwise, 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *bytePointer = (unsigned char *)&i;

	if (*bytePointer)
		return (1);
	else
		return (0);
}
