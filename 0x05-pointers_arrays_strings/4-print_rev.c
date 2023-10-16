#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 * @s: character of a string
 * Return: it returns void
 */
void print_rev(char *s)
{
	/* Declaring i to find the length of the string */
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
