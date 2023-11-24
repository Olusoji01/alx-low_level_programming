#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: characcter pointing to a string of 0 and 1
 * Returns: it returns the converted number at success
 * and 0 if there is one or more chars in string that
 * is not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0'|| *b == '1')
		{
			result = (result << 1) | (*b - '0');
		}
		else
		{
			return (0);
		}

		b++;
	}
	return (result);
}

