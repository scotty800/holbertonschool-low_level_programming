#include "main.h"
#include <stdio.h>

/**
 * factorial -print
 * @n: is the variable
 * Return: factorial de n
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
