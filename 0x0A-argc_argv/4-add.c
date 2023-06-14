#include <stdio.h>
#include <stdlib.h>

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
    int sum = 0; // Initialize sum to 0 instead of 1

    for (; i < argc; i++)
    {
        if (!argv[i]) // Check if argv[i] is NULL instead of its value
        {
            printf("0\n"); // Print a newline character to separate outputs
            // printf("%d\n", atoi(argv[i]));
        }
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return 1;
            }
            sum += atoi(argv[i]);
        }

        printf("%d\n", sum); // Print a newline character to separate outputs
    }

    return 0;
}
