#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a en parametre un entier
 * @n : name de variable int
 */

void print_to_98(int n)
{
	int lastn = n;

	if (n <= 98 && n >= 98)
	{
		while (lastn <= 98 && lastn >= 98)
		{
			if (lastn != 98)
			{
				_putchar(' ');
				_putchar(',');
			}
			if (lastn >= 10)
			{
				_putchar((lastn / 10) + '0');
				_putchar((lastn % 10) + '0');
			}
			else
			{
				_putchar(lastn + '0');
			}
			lastn++;
		}
	}
	else
	{
		lastn--;
	}
	_putchar('\n');

}
