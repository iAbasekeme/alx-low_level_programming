#include <stdio.h>

/**
* main - a program that prints the number
* of arguments passed into it.
* @argc: Argument count
* @argv: Argument vaector
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%d\n", i);
i++;
}
return (0);
}
