#include "main.h"
#include <string.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @s: character s pointing to the memory area of character
 * @n: first n bytes of the memory area
 * @b: constant byte
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
