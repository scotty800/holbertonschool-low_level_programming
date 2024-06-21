#include "main.h"

/**
 * times_table -verfi si int vas me retourner une valeur absolu
 * Return: abs de la variable en positive ou negation
 */

void times_table(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

		}
	}
}
