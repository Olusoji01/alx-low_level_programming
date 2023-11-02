#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: it returns pointer to integer at success, returns NULL
 * if min > max, also returns NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *)malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min + 1;
	}
	return (ptr);
}
