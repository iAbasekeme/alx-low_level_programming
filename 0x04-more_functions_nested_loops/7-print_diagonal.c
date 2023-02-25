#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character
 */

void print_diagonal(int n)
{
	int count;
	int num;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
