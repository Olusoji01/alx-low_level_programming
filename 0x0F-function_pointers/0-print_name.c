#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: name to be printed
 * @f: Function pointer
 * Return: it returns void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
