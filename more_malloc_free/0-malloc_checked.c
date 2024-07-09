#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked -alloue de la memoire et verifie l'alloca
 * @b: la taille de la memoire a allouer en octects
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
