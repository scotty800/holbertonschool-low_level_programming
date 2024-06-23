#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a en parametre un entier
 * @n : name de variable int
 * num : variable entier de % dix
 * return: retourne le resultat
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
		n++;
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(' ');
				_putchar(',');
			}
		}
		n--;
	}
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');

}

