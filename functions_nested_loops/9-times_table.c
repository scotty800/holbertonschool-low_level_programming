#include "main.h"
#include <stdio.h>

/**
 * times_table -prints the 9 times table.
 */

void times_table(void)
{
	int num, resul;
	int mult = 12;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
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
				_putchar((resul / 10) + '0');

				_putchar(resul % 10 + '0');
			}
		}
		_putchar('\n');
	}


}
