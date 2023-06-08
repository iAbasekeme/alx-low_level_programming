#include "main.h"

/**
 * factorial - A function to find the factorial of a number
 * @n: number to be factored
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
int s = 0;

if (n < 0)
return (-1);
else if (n == 1)
return (n);
else
{
s = n * factorial(n - 1);
}
return (s);
}
