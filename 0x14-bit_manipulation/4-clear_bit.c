#include <stdlib.h>
#include "main.h"
/**
 * clear_bit - a function that sets the value
 * of a bit to 0 at a given index.
 * @index: index
 * @n: integer of set its value
 * Return: it returns 1 at success and -1 at failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1UL << index);
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= mask;
	return (1);
}
