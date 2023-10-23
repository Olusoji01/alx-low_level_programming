#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @size: size of square matrix
 * @a: matrix variable
 * Return: it returns void
 */
void print_diagsums(int *a, int size)
{
	int i, j, b1 = 0, b2 = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				b1 += a[d];
			}
			else if (i + j == size - 1)
			{
				b2 += a[d];
			}
			d++;
		}
	printf("%i, %i\n", b1, b2);
	}
}
