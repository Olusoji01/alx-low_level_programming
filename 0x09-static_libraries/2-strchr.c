#include "main.h"
#include <string.h>
/**
 * _strchr - a function that locates a character in a string
 * @c: caracter c
 * @s: string s
 * Return: Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
