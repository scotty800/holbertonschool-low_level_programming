#include "main.h"
#include <stdio.h>

/**
 * print_numbers -verifi si c est en min si oui return
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}
