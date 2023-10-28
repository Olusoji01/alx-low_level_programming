#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to be checked
 * Return: it returns 1 if c is a letter and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
