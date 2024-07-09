#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range -cree un tableau d'entier contenant
 * @min: la valeur
 * @max: la valeur
 * Return: 0
 */

int *array_range(int min, int max)
{
	int i;
	int *array;
	int contain = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(contain * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < contain; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
