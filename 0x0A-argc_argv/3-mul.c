#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - a program that prints all arguments it receives.
* @argc: Argument count
* @argv: argumnet vector
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int i = 1;
int mult = 0;

if (argc != 3)
{
printf("ERROR\n");
return (1);
}
else
{
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;

printf("%d\n", result);
}
return (0);
}
