#include <stdio.h>
/**
 * main - a program that prints all possible combinations
 * of single-digit numbers.
 *
 * Return: (0)
 */
int main(void)
{
	int ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch < '9')
		{
			putchar(',');
			putchar(' ');

		}
	}
}
