#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - a function that prints
 * the last digit of a number.
 * @i: integer to print its last digit
 * Return: it returns the value of the last digit
 */
int print_last_digit(int i)
{
	int j;
	j = abs(i % 10);
	_putchar(j + '0');
	return (j);
}
