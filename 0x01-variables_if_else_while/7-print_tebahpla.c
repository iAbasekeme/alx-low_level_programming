#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: (0)
 */
int main(void)
{
	char alph = '1';

	for (alph = 'z'; alph >= 'a'; alph--)
	putchar(alph);
	putchar('\n');
	return (0);
}
