#include "main.h"

/**
 * _abs -verfi si int vas me retourner une valeur absolu
 * @num : variable entier
 * Return: abs de la variable en positive ou negation
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
}
