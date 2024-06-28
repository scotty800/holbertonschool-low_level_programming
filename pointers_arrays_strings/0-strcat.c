#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat -print
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int s = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (src[i] != '\0')
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[s + i] = '\0';

	return (dest);
}
