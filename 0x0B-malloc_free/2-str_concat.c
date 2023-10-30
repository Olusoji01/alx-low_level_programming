#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: First string to be concatenated
 * @s2: Second string
 * Return: it returns characters concatenated at success,
 * if NULL is passed, it treat as empty string,
 * also return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
       char *concat;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	concat = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (!concat)
	{
		return (NULL);
	}
	if (concat)
	{
		memcpy (concat, s1, strlen(s1));
		memcpy (concat + strlen(s1), s2, strlen(s2) + 1);
	}
	return (concat);
}
