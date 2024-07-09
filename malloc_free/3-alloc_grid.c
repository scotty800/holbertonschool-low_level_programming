#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid -alloue une grille a deux dimensions et l'init a zero
 * @width: la hauteur d'un tabelau
 * @height: la taille du tableau
 * Return: le tableau
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array =  malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0;  j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
