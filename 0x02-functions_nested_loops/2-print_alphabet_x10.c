#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 * void: no value is passed as a parameter
 * Return: It returns void
 */
void print_alphabet_x10(void)
{
	char str;
	int line_count = 0;

	while (line_count < 10)
	{
		str = 'a';

		while (str <= 'z')
		{
			_putchar(str);
			str++;
		}
		_putchar('\n');
		line_count++;
	}
}

