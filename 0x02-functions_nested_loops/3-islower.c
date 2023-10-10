#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: character to check if its lower
 * Returns: it returns 0 at execution
 */
int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
