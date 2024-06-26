#include "main.h"
#include <stdio.h>

/**
 * swap_int -print
 * @a: is the variable n
 * @b: is the variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
