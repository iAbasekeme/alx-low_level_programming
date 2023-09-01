#include <stdio.h>
#include "main.h"

/**
 * print_binary - A function that print the binary
 * representation of a number
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
    int result = 0;
    unsigned long int mask = 1UL << 31;

    for (int i = 0; i < 32; i++)
    {
        int bit = (n & mask) ? 1 : 0;
        printf("%d", bit);
        mask >>= 1;
    }
    printf("\n");
}