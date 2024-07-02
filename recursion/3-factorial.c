#include "main.h"
#include <stdio.h>

/**
 * factorial -print
 * @n: is the variable
 * Return: factorial de n
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
