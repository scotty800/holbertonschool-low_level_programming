#include "main.h"

/**
 * *_strchr -print
 * @s: pointer
 * @c: pointer
 * Return: s si
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (0);
}
