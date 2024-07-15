#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -execute une fonction donne sur charque element d'un tableau
 * @array: le tableau d'entiers
 * @size: la taille du tableau
 * @action: pointeur vers la fonction a executer sur chaque element du tableau
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
