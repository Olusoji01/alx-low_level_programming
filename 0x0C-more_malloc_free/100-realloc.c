#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory
 * block using malloc and free
 * @old_size: old size of the memory allocated
 * @new_size: new size of the memory allocated
 * @ptr: pointer to to perform memory allocation
 * Return: it returns 0 at success, if ptr is NUll,
 * then the call is equiv. to new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		memcpy(newptr, ptr, old_size);
	}
	free(ptr);
	return (newptr);
}
