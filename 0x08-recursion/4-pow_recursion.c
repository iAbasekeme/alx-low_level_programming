#include "main.h"

/**
 * _pow_recursion - a function that returns the value
 * of x raised to the power of y.
 * @x: base
 * @y: exponent
 *
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	while (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
