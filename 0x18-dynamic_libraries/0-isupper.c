#include "main.h"

/**
 *_isupper - function that checks for uppercase character.
 *@c: Argument to retun an int data type.
 *Return: if c is uppercase letter return 1 else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
