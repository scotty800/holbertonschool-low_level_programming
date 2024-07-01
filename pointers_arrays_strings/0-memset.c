#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_memset -priny that encodes a string
 * @s: pointer
 * @b: caract
 * @n: octet
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
