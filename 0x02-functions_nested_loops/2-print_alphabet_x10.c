#include "main.h"
/**
 *  print_alphabet_x10 - a function that prints 10 times
 *  the alphabet, in lowercase, followed by a new line.
 *
 *  Return: Always (0)
 */
void print_alphabet_x10(void)
{
	int ch = 1;
	int ch2 = 'a';

	while (ch < 10)
	{
		for (ch2 = 'a'; ch2 <= 'z'; ch++)
		{
			_putchar(ch2);
		}
		ch++;
		_putchar('\n');
	}
	return (0);
}
