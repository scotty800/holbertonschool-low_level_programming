#include "main.h"
#include <stdio.h>

/**
 * print_triangle -print
 * @size: is the variable n
 */

void print_triangle(int size)
{
	int triangle1, triangle2;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (triangle1 = 0; triangle1 <= size; triangle1++)
	{
		for (triangle2 = 0; triangle2 <= size; triangle2++)
		{
			_putchar('#');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
