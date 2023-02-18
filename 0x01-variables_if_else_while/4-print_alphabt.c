#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0)
 */
int main(void)
{
	char alp,e,q;
	e='e';
	q='q';
		
	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != e && alp != q)
	putchar(alp);
	}
	putchar('\n');
	return (0);
}
