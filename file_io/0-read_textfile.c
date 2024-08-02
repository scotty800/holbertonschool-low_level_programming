#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: nime of the file
 * @letters: number of letters to print
 * Return: 0 if filename NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_file, write_file;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	if (file != -1)
	{
		read_file = read(file, buffer, letters);
		write_file = write(STDOUT_FILENO, buffer, read_file);
	}
	close(file);
	free(buffer);

	return (write_file);
}
