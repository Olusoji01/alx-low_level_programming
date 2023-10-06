#include <stdio.h>
/**
 * main - a program that prints the alphabet
 * in lowercase followed by a new line
 * void: nothing is passed as an argument
 * Return: it return zero after execution
 */
int main(void)
{
	/* Declaring a variable and assigning a value to it */
	char str = 'a';

	/* looping through the variable */
	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');

	return (0);
}
