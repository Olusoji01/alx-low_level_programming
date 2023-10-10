#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes c to the standard output
 * @c: the character to write
 * Returnn: it return 1 on success
 * and -1 on error
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
