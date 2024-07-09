#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc -alloue de la memoire pour un tableau et initialise a zero
 * @nmemb: le nombre d'elements
 * @size: la taille de chaque ellement en octets
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int total = nmemb * size;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);


}
