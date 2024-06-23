#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a en parametre un entier
 * @n : name de variable int
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d\n, ", n--);
			printf("%d\n", n);
		}
	}

	else
	{
		while (n < 98)
		{
			printf("%d\n, ", n++);
			printf("%d\n", n);
		}
	}
}
