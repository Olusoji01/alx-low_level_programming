#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - a program that adds positive numbers.
 * it print 0 if no number is passed and error if
 * one of the number contains symbols that is not digit
 * @argc: size of arguments
 * @argv: commandline arguments
 * Return: it returns  0 after execustion.
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	char *flag;

	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &flag, 10);
			if (*flag)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
			}
		}
		printf("%d\n", sum);
	}
	if (argc <= 1)
	{
		printf("0\n");
	}
	return (0);
}
