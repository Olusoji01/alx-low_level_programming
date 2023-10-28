#include "main.h"
#include <string.h>
/**
 * _strstr - a function that locates a substring.
 * @needle: substring
 * @haystack: main string to find 1st occurence
 * of substring from
 * Return: Returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
