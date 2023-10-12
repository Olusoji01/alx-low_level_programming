#include "main.h"
/**
 * _isupper -  a function that checks for uppercase character.
 * @c: a character to be checked
 * Return: it returns 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
