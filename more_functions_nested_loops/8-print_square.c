#include "main.h"
#include <stdio.h>

/**
 * print_square -print
 * @size: is the variable n
 */

void print_square(int size)
{
	int square1, square2;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (square1 = 0; square1 < size; square1++)
	{
		for (square2 = 0; square2 < square1; square2++)
		{
			_putchar('\n');
		}

		_putchar('#');
		_putchar('\n');
	}
}
