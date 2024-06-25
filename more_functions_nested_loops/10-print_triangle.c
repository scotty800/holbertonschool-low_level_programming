#include "main.h"
#include <stdio.h>

/**
 * print_triangle -print
 * @size: is the variable n
 */

void print_triangle(int size)
{
	int triangle1, triangle2, tri3;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (triangle1 = 1; triangle1 <= size; triangle1++)
	{
		for (triangle2 = 1; triangle2 <= size - triangle1; triangle2++)
		{
			_putchar(' ');
		}
		for (tri3 = 1; tri3 <= triangle1; tri3++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
