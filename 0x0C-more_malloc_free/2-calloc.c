#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: it returns NULL if nmemb or size is 0, also returns
 * NULL if fails and returns memory allocation at success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = calloc(nmemb, size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
