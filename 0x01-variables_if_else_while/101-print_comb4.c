#include <stdio.h>
/**
 * main - a program that prints all possible different
 * combinations of three digits.
 * void: no arguments is passed to the main function
 * Return: it returns 0 after execution
 */
int main(void)
{
	/* Variables declaration */
	int i, j, k;

	/* iterating over variables through nexted loop */
	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				else if (i == 7 && j == 8 && k == 9)
				{
					putchar('\n');
				}
			}
		}
	}
	return (0);
}
