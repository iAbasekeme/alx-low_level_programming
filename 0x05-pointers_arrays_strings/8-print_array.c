#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * of integers, followed by a new line.
 * @n: number of arrays to be printed
 * @a: array of integers
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != (n - 1))
			printf(", ");
	}
	printf("\n");
}
