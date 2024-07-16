#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -imprime des chaines de caracteres separees par un separateur
 * @separator: le separateur entre les chaines
 * @n: le nombre de chaines de caracteres a imprimer
 * @...: la liste de chaines de carateres a imprimer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *total;

	va_start(ap, n);

	while (i < n)
	{
		total = va_arg(ap, char *);

	if (total == NULL)
	{
		printf("(nil)");
	}
	else
		printf("%s", total);

	if (separator && i < n - 1)
	{
		printf("%s", separator);
	}

		i++;
	}

	printf("\n");
	va_end(ap);
}
