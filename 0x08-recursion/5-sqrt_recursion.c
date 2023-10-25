#include "main.h"
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: number to find its natural square root
 * Return: it returns square root at success and
 * -1 if the number has no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}
/**
 * find_sqrt - function that guess the square root
 * of the natural number
 * @guess: guess of integer to know number that its square
 * can be natural number
 * @n: natural number
 * Return: it returns n if correct and -1 if greater than n
 */
int find_sqrt(int n, int guess)
{
	if ((guess *guess) == n)
	{
		return (guess);
	}
	else if ((guess *guess) > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, guess + 1));
	}
}
