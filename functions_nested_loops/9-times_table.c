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
			resul = num * mult;

			if (mult != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (resul <= 9)
			{
				_putchar(' ');
			}

			if (resul <= 9)
			{
				-putchar (resul + '0');
			}
			else
			{
				_putchar((resul / 10) + '0');

				_putchar((resul % 10) + '0');
			}
		}
		_putchar('\n');
	}


}
