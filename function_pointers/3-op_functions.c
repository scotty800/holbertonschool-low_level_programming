#include "3-calc.h"
#include <stdio.h>
/**
 * op_add -Ajoute deux entiers
 * @a: le premier entier
 * @b: le deuxieme entier
 * Return: le resultat
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -Ajoute deux entiers
 * @a: le premier entier
 * @b: le deuxieme entier
 * Return: le resultat
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -Ajoute deux entiers
 * @a: le premier entier
 * @b: le deuxieme entier
 * Return: le resultat
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -Ajoute deux entiers
 * @a: le premier entier
 * @b: le deuxieme entier
 * Return: le resultat
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -Ajoute deux entiers
 * @a: le premier entier
 * @b: le deuxieme entier
 * Return: le resultat
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
