#include <stdio.h>
/**
 * main - program that print the lovercase alphabet
 * in reverse, followed by new line with putchar function
 * void: no argument is passed into the function
 * Return: it returns 0 after execution
 */
int main(void)
{
	/* Declaring variable */
	char str;

	/* initializing and iteration using loop */
	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
	}
	putchar('\n');

	return (0);
}
