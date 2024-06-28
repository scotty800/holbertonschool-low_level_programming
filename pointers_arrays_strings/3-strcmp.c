#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcmp -print
 * @s1: pointer
 * @s2: pointer
 * Return: 1 si c'est Ãgale et faux si c'est 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}

}
