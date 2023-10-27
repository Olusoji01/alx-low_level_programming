#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 * @argc: The size of arguments
 * @argv: command line arguments
 * Return: it returns 0 after execution
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
