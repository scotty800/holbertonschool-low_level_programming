#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array -print
 * @a: pointer
 * @n: pointer
 * Return:
 */

void reverse_array(int *a, int n)
{
	int x;
	int tmp;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = tmp;
	}
}
