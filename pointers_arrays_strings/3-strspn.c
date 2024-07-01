#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strspn -print
 * @s: pointer
 * @accept: pointer
 * Return: longueur
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	int longueur = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				longueur++;
				break;
			}
		}

		if (accept[x] == '\0')
		{
			return (longueur);
		}
	}

	return (longueur);
}
