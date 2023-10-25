#include "main.h"
#include <math.h>
/**
 * _pow_recursion - a function that returns the value
 * of x raised to the power of y
 * @x: integer
 * @y: integer(power)
 * Return: it returns -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
