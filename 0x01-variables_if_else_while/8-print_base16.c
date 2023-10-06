#include <stdio.h>
/**
 * main - a program that prints all the number of
 * base 16 in lowercase, followed by a new line
 * void: no arguments is passed to the function
 * Return: it returns 0 after execution
 */
int main(void)
{
	/* Variable declaration */
	int i;
	char str;

	/* Iteration and initialization of value */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (str = 'a'; str <= 'f'; str++)
	{
		putchar(str);
	}
	putchar('\n');

	return (0);
}
