#include <stdio.h>

/**
 * main - prints its name + \n
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
