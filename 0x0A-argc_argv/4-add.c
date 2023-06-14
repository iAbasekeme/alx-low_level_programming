#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers.
 * @argc: Argument count
 * @argv: argumnet vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
int i = 1;
int j = 0;
int sum = 0;

for (; i < argc; i++)
{
if (!argv[i])
{
printf("0\n");
}
for (; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
