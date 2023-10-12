#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function to writes character to standard output
 * @c: character to be written
 * Return: it returns 1 for success
 * and -1 at error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
