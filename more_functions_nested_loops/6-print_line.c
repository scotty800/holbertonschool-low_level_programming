#include "main.h"
#include <stdio.h>

/**
 * print_line -print.
 * @n: is the variable n
 */

void print_line(int n)
{
	for (n = 0; n >= 0; n--)
	{
		_putchar(' ');
	}
	_putchar('\n');
}
