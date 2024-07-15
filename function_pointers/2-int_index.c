#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -recherche un entier dans un tableau en utilisant une fonction de comparaison
 * @array: le tableau d'entiers
 * @size: la taille du tableau
 * @cmp: pointeur vers la fonction de comparaison
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
		
	return (-1);
}
