#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array pointer
 * Return: it returns void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
			{
				_putchar(' ');
			}
			else
			{
				_putchar(a[i][j]);
			}
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
