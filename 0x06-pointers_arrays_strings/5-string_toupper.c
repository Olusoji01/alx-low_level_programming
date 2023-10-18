#include "main.h"
#include <stdio.h>
/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @c: string to convert to upper
 * Return: it returns character
 */
char *string_toupper(char *c)
{
	char *result = c;

	while(*c)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 'a' + 'A';
		}
		c++;
	}
	return (result);
}
