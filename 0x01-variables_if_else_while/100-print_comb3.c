#include <stdio.h>
/**
 * main - a program that prints all
 * possible different combinations of two digits.
 * void: no argument is passed into the function
 * Return: it returns 0 after execution
 */
int main(void)
{
	/* Declaring variables */
	int i;
	int j;

	/* Ieration and initialisation of variables */
	for (i = 0; i <= 8; i++)
	{
		for(j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else if (i == 8 && j == 9)
			{
				putchar('\n');
			}
		}

	}
	putchar('\n');

	return (0);
}
