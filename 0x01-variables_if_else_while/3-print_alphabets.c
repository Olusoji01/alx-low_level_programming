#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * void: no argument is passed
 * Return: it returns 0 after execution
 */
int main(void)
{
	/* Declaring variables */
	char str;
	char str_u;

	/* using for loop to print the alphabets */
	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	for (str_u = 'A'; str_u <= 'Z'; str_u++)
	{
		putchar(str_u);
	}
	putchar('\n');

	return (0);
}
