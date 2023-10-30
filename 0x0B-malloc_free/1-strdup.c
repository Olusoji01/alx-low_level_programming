#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * @str: string to be duplicated
 * Return: it returns a pointer to duplicated string on success,
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}
	return (strdup(str));

}
