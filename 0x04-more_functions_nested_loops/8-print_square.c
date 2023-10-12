#include "main.h"
/**
 * print_square - a function that prints a square,
 * followed by a new line.
 * @size: size of square
 * Return: it returns 0
 */
void print_square(int size)
{
	int i, j;
 
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
