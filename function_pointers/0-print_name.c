#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -Imprme un nom en utilisant une fonction de rappel
 * @name: le nom a imprimer
 * @f: pointeur vers la functiob de rappel utilisee pour imprimer le nom
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
