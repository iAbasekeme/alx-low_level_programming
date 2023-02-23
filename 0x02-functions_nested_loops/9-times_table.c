#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, multp, prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multp = 1; multp <= 9; multp++)
		{
			_putchar(',');
			_putchar(' ');

			prd = num * multp;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
