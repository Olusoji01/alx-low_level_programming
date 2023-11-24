#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - a function that sets the value
 * of a bit to 1 at a given index.
 * @index: index
 * @n: integer pointer
 * Return: it returns
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}

