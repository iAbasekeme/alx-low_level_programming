#include <stdio.h>
/**
 * main - print_alphabets.ci
 *
 * Return: (0)
 */
int main(void)
{
	char alp = '1';

	for (alp = 'a'; alp <= 'z'; alp++)
	putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
