#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @i: iterate number
 *
 * Return: the natural square root
 */
int sqrt_helper(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}
