#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - a function that returns the length
 * of a string.
 * @s: string to return its length
 * Return: it returns integer i.e length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	return (strlen(s));
}	
