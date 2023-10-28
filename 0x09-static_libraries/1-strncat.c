#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: destination to copied to
 * @src: source to copied from
 * @n: number of bytes to be copied
 * Return: it returns characters
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
