#include <stdio.h>
/**
 * main - a program that prints all single digit
 * numbers of base 10 starting from 0, followed by a new line.
 * void: no argument is passed to the function
 * Return: it return 0 after execution
 */
int main(void)
{
	/* Decalaring variable */
	int i;

	/* iterating over a variable using for loop */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
