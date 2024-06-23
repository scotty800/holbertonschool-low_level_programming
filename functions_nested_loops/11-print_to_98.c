#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a en parametre un entier
 * @n : name de variable int
 * num : variable entier de % dix
 */

void print_to_98(int n)
{

	if (n >= 98)
	{
		for (n = 98; n > 0; n--)
		{
			putchar('0' + n);
			if (n != 98)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
	else
	{
		for (n = 0; n < 98; n++)
		{
			putchar('0' + n);
			if (n != 98)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
}
