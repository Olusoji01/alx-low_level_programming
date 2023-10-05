#include<unistd.h>
/**
 * main - a program that print string
 * without using puts or printf function
 * void: no argument is passed to the main
 * Return: the program return 1 at execution
 */
int main(void)
{
	/*Declaring a variable i.e message and assign the string value to it*/
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/*writing out the message using write function*/
	write(2, message, 59);
	return (1);
}
