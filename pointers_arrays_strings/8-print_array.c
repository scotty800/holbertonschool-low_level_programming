#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_array -print
 * @n: is the variable
 * @a: pointer
 * Return:
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}

	printf("\n");
}
