#include <stdio.h>
/**
 * main - a program that prints all combination of two two digits number
 * void: no argument is passed into the function
 * Return: It returns 0 after execution
 */
int main(void)
{
	/* Variable declarations */
	int i, j;

	/* iteration over variables */
	for (i = 0; i <= 98; i++)
	{
		for (j = i;  j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			/* using if statement to add space and comma */
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			else if (i == 98 && j == 99)
			{
				putchar('\n');
			}
		}
	}

	return (0);
}

