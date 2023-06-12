#include <stdio.h>
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
    int i = 0;
    for (; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}