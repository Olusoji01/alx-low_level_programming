#include <stdio.h>
/**
 * main - a program that prints all possible combination
 * of single digit numbers, each number must be separated
 * by comma and be printed in ascending order
 * void: no argument is passed
 * Return: it returns 0 after execution
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

