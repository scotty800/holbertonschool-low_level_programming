#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func -recupere la fonction correspondant a l'operateur specifie
 * @s: chaine de caracteres representant l'operateur
 * Return: retourne l'operation
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
