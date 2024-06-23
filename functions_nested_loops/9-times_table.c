#include "main.h"

/**
 * print_last_digit -verfi si int vas me retourner une valeur %
 * @num : variable entier
 * lastN : variable entiter
 * Return: % de la variable en positive ou negation
 */

void times_table(void)
{
	int num, multi, resul;

	for (num = 0; num < 9; num++)
	{
		_putchar('0');

		for (num = 1; num < 9; num++)
		{
			_putchar(' ');
			_putchar(',');

			resul = num * mult;

			if (result <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(resul / 10);

				_putchar(resul % 10 + '0');
			}
		}
		_putchar('\n');
	}


}
