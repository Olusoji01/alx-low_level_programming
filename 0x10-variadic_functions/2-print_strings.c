#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings,
 * followed by a new line
 * @separator: the string to be printed between the strings
 * @n: n is the number of strings passed to the function
 * Return: it returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *val;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(list, char*);
		printf("%s", val);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (val == NULL)
		{
			printf("(nil)");
		}
	}
	va_end(list);
	printf("\n");
}
