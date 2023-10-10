#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: character to check if its lower
 * Return: it returns 1 if its lower and 0 if upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
