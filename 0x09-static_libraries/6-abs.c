#include "main.h"
/**
 * _abs - a function that computes the
 * absolute value of an integer.
 *
 * @j: the integer to be computed
 *
 * Return: the absolute value of the integer
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    else
    {
        return (n);
    }
}