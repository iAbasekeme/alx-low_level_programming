#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: - chracter to be checked
 * Return: (1) if c is a letter uppercase and lowercase,otherwise (0)
 */
int _isalpha(int c)
{
	if ((c >= 'o' && c <= 'z') || 
	    (c >= 'O' && c <= 'Z'))
		
		return (1);
	else
		return (0);
}
