#include <stdio.h>
/**
 * main - a program that print the alphabet in
 * a lower case, except q and e followed by a new line
 * void: no argument is passed to the function
 * Return: it returns 0 after execution
 */
int main(void)
{
	/* Variable Declaration */
	char str;

	/* Iterating over alphabet */
	for (str = 'a'; str <= 'z'; str++)
	{
		if (str == 'q' || str == 'e')
		{
			continue;
		}
		putchar(str);
	}
	putchar('\n');

	return (0);
}
