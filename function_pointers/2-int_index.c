#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -Imprme un nom en utilisant une fonction de rappel
 * @name: le nom a imprimer
 * @f: pointeur vers la functiob de rappel utilisee pour imprimer le nom
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	
	for (i = 0; i < size; i ++)
	{
		if (cmp(array[i]))
		return (i);
	}
		
	return (-1);
}
