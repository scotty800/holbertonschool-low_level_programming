#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _square_i -recurses find the natural
 * @a: is the variable
 * @i: square
 * Return: result
 */

int _square_i(int a, int i)
{
	if (i * i == a)
	{
		return (i);
	}

	if (a / 2 == i)
	{
		return (-1);
	}
	else
		return (_square_i(a, i + 1));
}

/**
 * _sqrt_recursion -Return le natural square du nombre
 * @n: nombre a calucler
 * Return: resultat
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	else
		return (_square_i(n, 1));
}
