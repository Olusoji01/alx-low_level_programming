#include "main.h"
#include <string.h>
/**
 * _memcpy - a function that copies memory area
 * @dest: destination to copy bytes to
 * @src: source to copy from
 * @n: number of bytes to copy from memory area
 * Return: It returns a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
