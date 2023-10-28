#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string to be converted to an integer
 * Return: it returns an integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	if (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	if (s[0] == '+')
	{
		i++;
	}
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}
	result = result * sign;
	return (result);
}
