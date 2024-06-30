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
	int i, j;

	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	
	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (src[i] == letters[j])
			{
				src[i] = leet[j];

				break;
			}
		}
	}
	
	return src;
}
