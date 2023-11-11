#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - a function that returns the
 * sum of all its parameters.
 * @n: size of arguments
 * Return: it returns 0 at success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum +=va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
