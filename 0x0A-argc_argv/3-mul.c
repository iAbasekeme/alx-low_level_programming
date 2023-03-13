#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: 1 on error, else 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int x = 0;

	if (argc >= 3)
	{
		i = atoi(argv[1]);
		x = atoi(argv[2]);
		printf("%d\n", i * x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
