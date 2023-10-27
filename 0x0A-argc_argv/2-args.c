#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints all arguments it receives.
 * @argc: size of arguments
 * @argv: command line arguments
 * Return: it returns o at success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
