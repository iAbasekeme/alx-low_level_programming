#include "main.h"

/**
 * _abs - a function that computes the
 * absolute value of an integer.
 *
 * @j: the integer to be computed
 *
 * Return: the absolute value of the integer
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
}
