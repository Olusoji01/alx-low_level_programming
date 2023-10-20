#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @c: character to be encoded
 * Return: it returns character
 */
char *rot13(char *c)
{
	int i, j;

	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == str[j])
			{
				c[i] = ROT13[j];
				break;
			}
		}
	}
	return (c);
}
