#include "main.h"
#include <stdio.h>
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to set its value
 * @to: character to set the value of pointer to
 * Return: it returns void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
