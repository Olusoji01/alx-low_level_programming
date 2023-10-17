#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 * @n: number of elements of the array
 * @a: array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
