#include "main.h"
#include <stdlib.h>
/**
 * print_number - a function that prints an integer
 * @n: integer
 * Return: it returns void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		if (n >= 1000)
		{
			_putchar(n / 1000 + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 100)
		{
			_putchar(n / 100 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 0 && n < 10)
		{
			_putchar(n + '0');
		}
	}
	else
	{
		if (n >= 1000)
		{
			_putchar(n / 1000 + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 100)
		{
			_putchar(n / 100 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else if (n >= 0 && n < 10)
		{
			_putchar(n + '0');
		}
	}
}
