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
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + 1];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 = sum2 + a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum, sum2);
}
