#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion -print la racin carréde n
 * @n: is the variable
 * Return: squrt_recursion
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt(n, 0));
}

int sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (n);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (sqrt(n, i + 1));
}
