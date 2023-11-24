#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 * Return: it returns the number of bits at success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;
	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
