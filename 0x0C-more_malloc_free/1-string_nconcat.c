#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: size
 * Return: it returns concatenated string, returns NULL if
 * fails, treated as empty string if NULL is passed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	concatenated = (char *)malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}
	if (concatenated)
	{
		memcpy(concatenated, s1, strlen(s1));
		memcpy(concatenated + strlen(s1), s2, n + 1);
	}
	return (concatenated);
}
