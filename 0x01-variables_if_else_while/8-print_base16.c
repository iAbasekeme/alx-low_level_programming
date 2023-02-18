#include <stdio.h>
/**
 * main -  a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: (0)
 */
int main(void)
{
	char alp = '1';

	for (alp = '0'; alp <= '9'; alp++)
		putchar(alp);
	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);
}
