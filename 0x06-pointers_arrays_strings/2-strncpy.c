#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copies a string.
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: it returns characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
