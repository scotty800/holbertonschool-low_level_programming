#include "main.h"

/**
 * print_last_digit -verfi si int vas me retourner une valeur %
 * @num : variable entier
 * lastN : variable entiter
 * Return: % de la variable en positive ou negation
 */

int print_last_digit(int num)
{
	int lastN = num % 10;

	if (lastN < 0)
	{
		lastN = -lastN;
	}

	_putchar (lastN + '0');

	return (lastN);

}
