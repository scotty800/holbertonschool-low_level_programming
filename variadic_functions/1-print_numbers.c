#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -imprime des nombres avec un separateur
 * @separator: chaine de caracteres a imprimer entre les nombres
 * @n: nombre de parametres entiers
 * @...: Liste d'arguments entiers a imprimer
 * Return: le resultat
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int total;
	unsigned int i;

	va_start(ap, n);

	while (i < n)
	{
		total = va_arg(ap, int);
		printf("%d", total);
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
