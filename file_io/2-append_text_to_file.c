#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: variable pointer
 * @text_content: content file
 * Description: function that appends text at the end of a file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t index = 0;
	int file;
	ssize_t write_file;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		while (text_content[index])
			index++;
		write_file = write(file, text_content, index);
	}

	if (file == -1 && write_file == -1)
	{
		return (-1);
	}

	close(file);
	return (1);
}
