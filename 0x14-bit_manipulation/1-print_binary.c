#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int i, numbits, leading_zero = 1;

	numbits = sizeof(unsigned long int) * 8;

	for (i = numbits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1 || leading_zero == 0)
		{
			_putchar(bit + '0');
			leading_zero = 0;
		}
	}
	if (leading_zero == 1)
	{
		_putchar('0');
	}
}
