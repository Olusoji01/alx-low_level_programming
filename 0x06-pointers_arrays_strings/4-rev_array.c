#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the
 * content of an array of integers.
 * @n: number of elements of the array
 * @a: array
 * Return: it returns void
 */
void reverse_array(int *a, int n)
{
	/**
	 * Declaring variables i for iteration and
	 * temp to hold variable temporarily
	 */
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
