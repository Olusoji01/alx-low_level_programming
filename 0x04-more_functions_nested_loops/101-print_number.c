#include "main.h"
/**
 * print_number -  a function that prints an integer
 * @n: integer
 * Return: it returns 0
 */
void print_number(int n)
{
	int divisor;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	divisor = 1;
	temp = n;

	while (temp / 10 > 0)
	{
		divisor *= 10;
		temp /= 10;
	}
	while (divisor > 0)
	{
		int digit = n / divisor;

		_putchar(digit + '0');

		n -= digit * divisor;

		divisor /= 10;
	}
}
