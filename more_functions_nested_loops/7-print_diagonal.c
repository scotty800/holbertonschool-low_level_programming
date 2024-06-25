#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -print.
 * @n: is the variable n
 */

void print_diagonal(int n)
{
	int size, nix;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (size = 0; size < n; size++)
		{
			for (nix = 0; nix < size; nix++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	
}
