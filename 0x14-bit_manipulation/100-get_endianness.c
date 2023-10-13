#include "main.h"

/**
 * get_endianness - checks for small or big endian
 * Return: 0 for big and 1 for small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
