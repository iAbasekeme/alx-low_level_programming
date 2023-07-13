#include "main.h"
/**
 * print_binary - prints the binary equivalent of a unsigned long number
 * @n: number to print in binary
 * Return : Always 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int sizeBytes = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (sizeBytes - 1);

	while (mask > 0 && (n & mask == 0))
		mask = mask >> 1;

	while (mask > 0)
	{
		printf("%d", (n & mask) != 0);
		mask = mask >> 1;
	}
}
