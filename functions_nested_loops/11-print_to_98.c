#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a en parametre un entier
 * @n : name de variable int
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d\n, ", n);
		}
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
