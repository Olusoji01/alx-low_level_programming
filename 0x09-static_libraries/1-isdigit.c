#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: integer to check if its digit from 0 - 9
 * Return: it returns 1 if digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
