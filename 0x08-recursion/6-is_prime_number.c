#include "main.h"
#include <math.h>
/**
 * is_prime_helper - a function that that helps to find
 * prime number
 * @n: integer
 * @i: divisor
 * Return: it returns 1 if the input is a prime number and
 * retun 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: integer
 * Return: it returns 1 if the input is a prime number and
 * retun 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
