#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *leet -priny that encodes a string into 1337.
 * @src: pointer
 * Return: src
 */

char *leet(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] ==  'a' || src[i] == 'A')
		{
			src[i] = '4';
		}

		else if (src[i] == 'e' || src[i] == 'E')
		{
			src[i] = '3';
		}

		else if (src[i] == 'o' || src[i] == 'O')
		{
			src[i] = '0';
		}

		else if (src[i] == 't' || src[i] == 'T')
		{
			src[i] = '7';
		}

		else if (src[i] == 'l' || src[i] == 'I')
		{
			src[i] = '1';
		}
	}

	return (src);
}
