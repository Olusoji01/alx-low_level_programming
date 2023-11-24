#include <stdlib.h>
#include "main.h"
/**
 * get_bit - a function that returns the
 * value of a bit at a given index.
 * @index: index of the bit
 * @n: integer
 * Return: it returns the value of a the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit = (n & mask) ? 1 : 0;
	return (bit);
}
