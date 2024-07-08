#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *create_array -Cr√© un tableau de caract√res et l'initialise avec u
 * @size: la taille du tableau cr√er
 * @c: le caract√re avec lequel initialiser le tableau
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
