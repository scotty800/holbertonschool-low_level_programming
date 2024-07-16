#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name -Imprme un nom en utilisant une fonction de rappel
 * @name: le nom a imprimer
 * @f: pointeur vers la functiob de rappel utilisee pour imprimer le nom
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("error\n");
		return (1);
	}
	operation = get_op_func(argv[2]);

	a = atoi(argv[1]);
        b = atoi(argv[3]);

	if (operation == NULL)
	{
		printf("error\n");
		return (1);
	}
	
	result = operation(a, b);
	
	printf("%d\n", result);
	return (0);


}
