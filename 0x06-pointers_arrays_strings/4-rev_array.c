#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of an array of integers.
 * @n: number of elements of the array
 * @a: array
 * Return: it returns void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
