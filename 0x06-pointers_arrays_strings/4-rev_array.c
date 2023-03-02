#include "main.h"

/**
 * reverse_array - a function that reverses the
 * content of an array of integers.
 * @a: array of integers
 * @n: size of array
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++;)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
