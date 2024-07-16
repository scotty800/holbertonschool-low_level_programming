#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -calcule la somme d'un nombre variable d'arguments entiers
 * @n: nombre d'arguments
 * @...: Liste d'arguments entiers a additionne
 * Return: le resultat
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int total;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	total = 0;
	i = 0;

	while (i < n)
	{
		total += va_arg(ap, int);
		++i;
	}

	return (total);
}
