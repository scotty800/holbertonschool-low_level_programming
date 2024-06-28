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
	int s = 0;

	while (s1[i] != 0)
	{
		i++;
	}

	while (s2[s] != 0)
	{
		s++;
	}

	if(s1[i] == s2[s])
	{
		return (1);
	}
	else
		return (0);
}
