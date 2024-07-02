#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _pow_recursion -print
 * @x: is the variable
 * @y: is the varaible
 * Return: la puissance de x et y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
