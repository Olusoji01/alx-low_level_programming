#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates
 * all the arguments of your program
 * @av: Commandlive arguments
 * @ac: size
 * Return: it returns character at success,
 * returns NULL if ac or av is NULL or if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, total_length, current_position;
	char *concatenated;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	concatenated = (char *)malloc(sizeof(char) * total_length + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	current_position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(concatenated + current_position, av[i]);
		current_position += strlen(av[i]);
		concatenated[current_position] = '\n';
		current_position++;
	}
	/* Add a null-terminator at the end */
	concatenated[total_length] = '\0';

	return concatenated;
}
