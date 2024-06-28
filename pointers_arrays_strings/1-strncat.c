#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strncat -print
 * @dest: pointer
 * @src: pointer
 * @n: pointer de src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int s = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[s + i] = src[i];
		i++;
	}
	dest[s + i] = '\0';

	return (dest);
}
