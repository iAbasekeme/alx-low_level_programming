#include <stdio.h>
/**
 * main - printing with putchar
 *
 * Return: (0)
 */
int main(void)
{
	char alph = '1';

	for (alph = 'a'; alph <= 'z'; alph++)
	putchar(alph);
	putchar('\n');
	return (0);
}
