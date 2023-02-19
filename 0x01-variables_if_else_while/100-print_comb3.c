#include <stdio.h>
/**
 * main - a program that prints all possible different
 * combinations of two digits.
 *
 * Return: (0)
 */
int main(void)
{
	int ch, ch2;

	for (ch = 0; ch < 9; ch++)
	{
		for (ch2 = 1; ch2 <= 9; ch++)
		{
			putchar(ch);
			putchar(ch2);

			if (ch < 9 && ch2 == 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
