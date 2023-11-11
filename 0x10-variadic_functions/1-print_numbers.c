#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @seperator: string to be printed between numbers
 * @n: number of the arguments
 * Return: it returns void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, val;
	va_list list;
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(list, int);
		if (separator != NULL && i < n - 1)
		{
			printf("%d, ", val);
		}
		if (separator != NULL && i == n - 1)
		{
			printf("%d\n", val);

		}

	}
	va_end(list);
}

