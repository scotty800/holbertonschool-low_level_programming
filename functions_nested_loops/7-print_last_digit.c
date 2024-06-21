#include "main.h"

/**
 * print_last_digit -verfi si int vas me retourner une valeur %
 * @num : variable entier
 * Return: % de la variable en positive ou negation
 */

int print_last_digit(int num)
{
	if (num >= 0)
	{
		return (num % 10);
	}
	else
		return (-num % 10);
}
