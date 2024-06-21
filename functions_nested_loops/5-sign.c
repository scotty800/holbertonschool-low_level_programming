#include <stdio.h>
#include "main.h"

/**
 * print_sign -verifi si n est sup, inf ou egale a 0 return 1
 *@n: est le caracter
 *Return: 1 si il est sup, -1 negative ou 0 autre
 */

int print_sign(int n)
{
	if (n >= 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n <= 0)
	{
		_putchar('-');

		return (-1);
	}
	else
		_putchar('0');
	return (0);
}
