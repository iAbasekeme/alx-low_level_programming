#include <stdio.h>
#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - Program Entry
 *
 * Description: Program that takes 4 arguments where 2 are
 *              int variables plus an operator to perform
 *              a function between the two numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0-on success
*/
int main(int argc, char *argv[])
{
int num1, num2;
char *operator;
int (*func)(int, int);
int result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator= argv[2];

func = get_op_func(operator);
if (func)
{
result = func(num1, num2);
printf("%d", result);
}
else
{
printf("Error\n");
}
exit(99);
}
