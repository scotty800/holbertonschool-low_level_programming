#include "main.h"
#include <stdio.h>

/**
 * times_table -prints the 9 times table.
 */

void times_table(void)
{
	int num, resul, mult;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(' ');
			_putchar(',');

			resul = num * mult;

			if (resul <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(resul / 10 + '0');

				_putchar(resul % 10 + '0');
			}
		}
		_putchar('\n');
	}


}
