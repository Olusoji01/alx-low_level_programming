#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: it returns void
 */
void rev_string(char *s)
{
	int i, swap, len;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = swap;
	}
}
