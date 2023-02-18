#include <stdio.h>
/**
 * main - "print all single digit numbers of base 10."
 *
 * Return: (0)
 */
int main(void)
{
	char alp = '1';

	for (alp = '0'; alp <= '9'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
