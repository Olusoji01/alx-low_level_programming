#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet,
 * in lowercase, followed by a new line
 * void: no arguments is passed to the function
 * Return: it returns void
 */
void print_alphabet(void)
{
	char str;

	for (str = 'a'; str <= 'z'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
