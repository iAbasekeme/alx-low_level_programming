#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments
 * @argc: number of arguments
 * @argv: array of string values
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
