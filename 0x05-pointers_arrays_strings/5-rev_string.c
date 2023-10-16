#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: it returns void
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
