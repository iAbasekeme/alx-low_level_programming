#include "search_algos.h"

/**
 * print_array - function that print array
 * @array: pointer to the first elm of array
 * @L: the lowest value;
 * @R: the highest value
 */
void print_array(int *array, size_t L, size_t R)
{
	size_t i;

	for (i = L; i <= R; i++)
	{
		if (i != R)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - A function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: First element in the array
 * @size: size of the Array
 * @value: Expected value
 *
 * Return: value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t middle;

	low = 0;
	high = size - 1;

	if (array == NULL || size <= 0)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		middle = low + (high - low) / 2;

		if (array[middle] == value)
		{
			return (value);
		}
		if (array[middle] < value)
		{
			low = middle + 1;
		}
		else
			high = middle - 1;
	}
	return (-1);
}
