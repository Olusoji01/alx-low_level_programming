#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: size of arguments
 * @argv: command line arguments
 * Return: it return 0 after execution
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
