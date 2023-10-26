#include "main.h"
#include <stdbool.h>
/**
 * strcmp - a function that compares two strings and
 * @s1: first string
 * @s2: second string
 * Return: it returns true if the strings can be
 * considered identical, otherwise return false
 */
int strcmp(const char *s1, const char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (true);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return ((strcmp(s1 + 1, s2 + 1)) || (strcmp(s1, s2 + 1)));
	}
	return (false);
}

/**
 * wildcmp - a function that compares two strings and
 * returns 1 if the strings can be considered
 * identical, otherwise return 0
 * @s1: first string
 * @s2: second string
 * Return: it returns 1 if the strings can be
 * considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2) ? 1 : 0);
}
