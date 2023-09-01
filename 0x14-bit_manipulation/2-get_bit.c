#include "main.h"

/**
 * get_bit - A function to get a bit at an index
 * @n: Number of bits
 * @index: index
 *
 * Return: -1 on failure otherwise,value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
		return -1;

	return ((n >> index) & 1);
}
