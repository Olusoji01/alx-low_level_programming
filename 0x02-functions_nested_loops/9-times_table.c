#include "main.h"
/**
 * times_table - a function that prints
 * the 9 times table, starting with 0
 * void: no arguments is passed to the function
 * Return: it returns void
 */
void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 9)
		{
			if (j == 0)
			{
				_putchar(i * j + '0');
			}
			else if (i * j < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i * j + '0');
			}
			else if (i * j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}

}
