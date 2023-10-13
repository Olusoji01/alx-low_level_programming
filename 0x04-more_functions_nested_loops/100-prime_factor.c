#include <stdio.h>
/**
 * main - a program that finds and prints the
 * largest prime factor of the number 612852475143
 *
 * Return: it returns largest prime factor
 */
int main(void)
{
	/*
	 * Declaring variables in which n represent
	 * the number to find its factor, div means division,
	 * ans is answer, and maxFact represents largest factor
	 */
	long int n, div, ans, maxFact;

	n = 612852475143, div = 2, ans = 0;
	while (n != 0)
	{
		if (n % div != 0)
		{
			div += 1;
		}
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld is the largest prime factor!", maxFact);
				ans = ans + 1;
				break;
			}
		}
	}
	return (0);
}
