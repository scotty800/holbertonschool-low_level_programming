#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a en parametre un entier
 * @n : name de variable int
 * num : variable entier de % dix
 */

void print_to_98(int n)
{
	int num = n % 10;

	if (num >= 98)
	{
		for (num = 98; num > 0; num--)
		{
			putchar(num + '0');
			if (num != 98)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
	else
	{
		for (num = 0; num < 98; num++)
		{
			putchar(num + '0');
			if (num != 98)
			{
				putchar(' ');
				putchar(',');
			}
		}
	}
}
