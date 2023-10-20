#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: integer
 * Return: it returns void
 */
void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i >= 1000)
	{
		_putchar(i / 1000 + '0');
	}
	if (i >= 100)
	{
		_putchar((i / 100) % 10 + '0');
	}
	if (i >= 10)
	{
		_putchar((i / 10) % 10 + '0');
	}
	_putchar(i % 10 + '0');
}

