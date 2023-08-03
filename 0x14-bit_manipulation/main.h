#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: length of string to be printed.
 *
 * Return: string length
 */
int _strlen(char *s)
{
    int c = 0;

    for (; *s != '\0'; s++)
    {
        c++;
    }
    return (c);
}
int _strlen(char *s);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif