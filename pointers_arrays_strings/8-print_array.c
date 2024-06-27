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
		if (i == 0)
		{
			printf("%d, ", a[i]);
		}
		else
			printf ("%d, ", a[i]);
	}

	printf("\n");
}
