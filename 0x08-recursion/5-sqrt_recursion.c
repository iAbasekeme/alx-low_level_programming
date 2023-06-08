#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural 
 * square root of a number.
 * @n: the number to be rounded
 *
 * Return: the natural square root the natural number
 */
int _sqrt_recursion(int n)
{
int hint = 0;
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
return (n);
hint = _sqrt_recursion(n / 2);

if (hint * hint == n)
return (hint);
else
hint = (hint + n / hint) / 2;

return (hint);
}
