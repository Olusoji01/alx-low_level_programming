#include "main.h"
/**
 * print_times_table - a function that prints the
 * n times table, starting with 0. if n is greater than 15
 * or less than 0, the function should not print anythin
 * @n: integer
 * Return: it reurns void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(j + '0');
				}
				else
				{
					if ((i * j) < 10 && j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(i * j + '0');
					}
					else if (i * j >= 10 && i * j < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar((i * j) / 10 + '0');
						_putchar((i * j) % 10 + '0');
					}
					else if (i * j >= 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar((i * j) / 100 + '0');
						_putchar(((i * j / 10) % 10) + '0');
						_putchar((i * j) % 10 + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
