#include "3-calc.h"
#include <stdio.h>
/**
 * print_name -Imprme un nom en utilisant une fonction de rappel
 * @name: le nom a imprimer
 * @f: pointeur vers la functiob de rappel utilisee pour imprimer le nom
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL && ops[i].op[0] != s[0])
	{
		i++;
	}

	return (ops[i].f);

}
