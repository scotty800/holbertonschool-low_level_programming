#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strncpy -print
 * @dest: pointer
 * @src: pointer
 * @n: pointer src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
