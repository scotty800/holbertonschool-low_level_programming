#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
