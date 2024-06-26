#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -print en diagonal
 * @a: pointe vers un tab
 * @size: octet
 */
void print_diagsums(int *a, int size)
{
	int i;

	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		diag2 += a[i];
		a -= size;
	}


	printf("%d, %d\n", diag1, diag2);
}
