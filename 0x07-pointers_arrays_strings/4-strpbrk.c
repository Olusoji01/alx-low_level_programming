#include "main.h"
#include <string.h>
/**
 * _strpbrk - a function that searches a string for any
 * of a set of bytes. The _strpbrk() function locates the
 * first occurrence in the string s of any of the byts
 * in the string accept
 * @accept: substring to locate its first occurence
 * @s: string to locate fisrt occurence of substring from
 * Return: Returns a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
