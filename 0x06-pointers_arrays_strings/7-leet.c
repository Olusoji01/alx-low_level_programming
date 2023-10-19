#include "main.h"
#include <string.h>
/**
 * leet - a function that encodes a string into 1337
 * @c: character to encode
 * Return: it returns character
 */
char *leet(char *c)
{
	int i, j;

	char str[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == str[j])
			{
				c[i] = str2[j];
			}
		}
	}
	return (c);
}
