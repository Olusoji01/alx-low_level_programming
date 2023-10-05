#include<stdio.h>
/**
 * main - a program that prints the size of various
 * types on the computer it is compiled and run on
 * void: no argument is passed to the main function
 * Return: it return 0 after execution
 */
int main(void)
{
	/* Declaring varibles */
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/*printing the size of various types*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
