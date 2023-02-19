#include <stdio.h>
/**
 * main - a program that prints all possible
 * different combinations of two digits.
 *
 * Return: (0)
 */
int main(void)
{
	int ch, ch2;

	for (ch = '0'; ch < '9'; ch++)
	{
		for (ch2 = '1'; ch2 <= '9'; ch2++)
		{
			putchar(ch);
			putchar(ch2);
<<<<<<< HEAD
		if (ch == '9' && ch2 <= '9')
			putchar(',');
			putchar(' ');
		}
	}
=======
	if (ch == '9' && ch2 <= '9')
	putchar(',');
	putchar(' ');
	
>>>>>>> 267955a575f9c995b15b3b9335d4af59ce92b5b7
	putchar('\n');
	return (0);
}
