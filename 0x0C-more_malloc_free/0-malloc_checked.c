#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size
 * Return: it returns void
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(98);
	}
	return (i);
}
