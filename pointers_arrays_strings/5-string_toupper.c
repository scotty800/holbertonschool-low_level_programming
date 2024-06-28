#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *string_toupper -print
 * @str: pointer
 * Return: i lowercase to uppercase
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
