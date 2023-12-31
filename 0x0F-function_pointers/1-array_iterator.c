#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -  a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array
 * @size: size of an array
 * @action: function pointer
 * Return: it returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
