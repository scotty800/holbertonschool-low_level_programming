#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_memcpy -priny that encodes a string
 * @dest: pointer
 * @src: caract
 * @n: octet
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
