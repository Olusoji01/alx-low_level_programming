#include "main.h"
/**
 * factorial - a function that returns the factorial
 * of a given number.
 * @n: integer to print its factorial
 * Return: it returns integer to main function
 * it returns 0 if n is lower than 0, -1 to indicate
 * an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

