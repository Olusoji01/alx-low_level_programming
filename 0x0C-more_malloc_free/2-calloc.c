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
	size_t totalsize;

	totalsize = (size_t)nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(totalsize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, totalsize);
	return (ptr);
}
