#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strstr -priny that encodes a string
 * @haystack: pointer
 * @needle: caract
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *start = haystack;
		char *n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}
	return (0);
}
