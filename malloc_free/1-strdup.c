#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -Duplique une chaine de cara
 * @str: La chaine de caract�rs
 * Return: 0
 */
char *_strdup(char *str)
{
	int index;
	char *s;
	int lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[lenght] != '\0')
	{
		lenght++;
	}

	s = malloc(sizeof(char) * (lenght + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (index = 0; index <= lenght; index++)
	{
		s[index] = str[index];
	}
	s[index] = '\0';

	return (s);
}
