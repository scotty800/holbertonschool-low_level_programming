#include <stdio.h>
#include "main.h"

/**
 * more_numbers -display l'alphabet de a jusqu'a z 10fois
 */
 

void more_numbers(void)
{
	int num, n;

	for (num = 0; num <= 10; num++)
	{
		for (n = 0; n <= 14;  n++)
		{
			_putchar((num % 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
		}
	}
}
