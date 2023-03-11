#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: - chracter to be checked
 * Return: (1) if c is a letter uppercase and lowercase,otherwise (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
