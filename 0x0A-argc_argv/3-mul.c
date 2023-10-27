#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: size of arguments
 * @argv: command line arguments
 * Return: it returns 0 at success
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc - 1; i++)
	{
		mul = atoi(argv[i + 1]) * atoi(argv[i]);
		printf("%d\n", mul);
	}
	return (0);
}
