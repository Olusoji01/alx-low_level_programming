#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output.
 * @letters: letters of the file
 * @filename: Filename
 * Return: returns actual number of leters it could read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;

	file = fopen(filename, "rb");
	if (filename == NULL)
	{
		return (0);
	}
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, file);
	fclose(file);
	if (bytesRead < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	printf("%s", buffer);
	free(buffer);
	return (bytesRead);
}

