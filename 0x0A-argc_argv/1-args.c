#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number
 * of arguments passed into it.
 * @argc: Argument count
 * @argv: Argument vaector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv)
{
    (void)argv;
    printf("%d", argc - 1);
    return 0;
}
