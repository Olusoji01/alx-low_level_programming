#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory
 * block using malloc and free
 * @old_size: old size of the memory allocated
 * @new_size: new size of the memory allocated
 * Return: it returns 0 at success, if ptr is NUll,
 * then the call is equiv. to new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *newptr;

	if (ptr == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		copy_size = new_size;
	}
	else
	{
		copy_size = old_size;
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	memcpy(newptr, ptr, copy_size);

	free(ptr);
	return (newptr);
}
