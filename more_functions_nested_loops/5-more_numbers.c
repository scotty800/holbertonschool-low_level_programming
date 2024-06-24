#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 -display l'alphabet de a jusqu'a z 10fois
 *
 *
 */

void more_numbers(void)
{
	int num, n;

	for (num = 0; num <= 10; num++)
	{
		for (n = 0; n <= 14;  n++)
		{
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
