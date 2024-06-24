#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers -verifi si c est en min si oui return
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}

	_putchar('\n');
}

