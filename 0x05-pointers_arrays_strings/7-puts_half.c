#include "main.h"
/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: string to print its half
 * Return: it returns void
 */
void puts_half(char *str)
{
	int i, len, half;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	half = len  / 2;
	for (i = half; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
