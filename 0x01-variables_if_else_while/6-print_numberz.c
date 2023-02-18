#include <stdio.h>
/**
 * main - "a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line."
 *
 * Return: (0) Always
 */
int main(void)
{
	int alp = '1';

	for (alp = '0'; alp <= '9'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
