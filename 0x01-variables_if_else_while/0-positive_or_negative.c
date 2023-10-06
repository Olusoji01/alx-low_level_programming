#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program that assign a random
 * number to the variable each time it is executed
 * void: No value is passed as an argument
 * Return: it return 0 after execution
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Here is my code */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
