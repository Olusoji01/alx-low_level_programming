#include <stdio.h>
/**
 * main - a program that print all single digit
 * numbers of base 10 starting from 0, followed by new line
 * void: no argument is passed into the function
 * Return: the program returns 0 after execution
 */
int main(void)
{
	/* Declaring a variable */
	int i;

	/* Iterating over i with for loop */
	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
