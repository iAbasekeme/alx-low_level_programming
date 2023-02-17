#include <stdlib.h>
#include <time.h>
/**
 * main -"This program will assign a random number to the variable
 * n each time it is executed. Complete the source code in order
 * to print the last digit of the number stored in the variable"
 *
 * Return: (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is negative");
	}
	if (n == 0)
	{
		printf("%d is zero");
	}
	if (n < 0)
	{
		printf("%d is negative");
	}
	return (0);
}

