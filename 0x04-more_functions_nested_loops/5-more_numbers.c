#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{

	int calc;
	int num;

	for (calc = '0'; calc <= '9'; calc++)
	{
		for (num = '0'; num <= '14'; num++)
		{
			if (num > '9')
				_putchat(num);
			_putchar(num);
		}
		_putchar('\n');
	}
}
