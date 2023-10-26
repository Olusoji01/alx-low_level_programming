#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive -  a function that check if
 * character is a palindrome or not
 * @s: input string
 * @i: beginning of the string
 * @j:end of the string
 * Return: it returns 1 if its palindrom and 0 if not
 */
int is_palindrome_recursive(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] == s[j])
	{
		return (is_palindrome_recursive(s, i + 1, j - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: string
 * Return: it return 1 if its palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}

