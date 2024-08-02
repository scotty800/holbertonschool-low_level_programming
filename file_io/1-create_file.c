#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: the name of the file
 * @text_content: the text content to write
 * Return: 1 for success, -1 for fails
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t index = 0;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[index] != '\0')
	{
		index++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file != -1)
	{
		write(file, text_content, index);
	}

	if (file == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
