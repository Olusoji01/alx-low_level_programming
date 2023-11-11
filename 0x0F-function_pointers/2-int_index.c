#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: array
 * @size: size of an array
 * @cmp: pointer function
 * Return: it returns 0 at success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		if (size <= 0)
		{
			return (-1);
		}
	}
	return (-1);
}
