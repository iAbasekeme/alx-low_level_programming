#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: Argument count
 * @argv: argumnet vector
 *
 * Return: Always 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
    int i = 1;
    int mult = 0;

    if (argc <= 2)
    {
        printf("ERROR\n");
        return (1);
    }
    for (; i < argc; i++)
    {
        mult = atoi(argv[1]) * atoi(argv[2]);
    }
    printf("mult is %d\n", mult);
    return (0);
}
