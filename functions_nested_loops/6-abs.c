#include <stdio.h>
#include "main.h"

/**
 * _abs -verfi si int vas me retourner une valeur absolu
 * @num : variable entier
 * Return: 0
 */

int _abs(int num)
{
	int num2;

	num = _abs(1);
	putchar(num);

	num2 = _abs(-5);
	putchar(num2);

	return (0);
}
