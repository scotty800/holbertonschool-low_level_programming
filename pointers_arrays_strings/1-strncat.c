#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat -print
 * @dest: pointer
 * @src: pointer
 * @n: pointer de src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return dest;
}
