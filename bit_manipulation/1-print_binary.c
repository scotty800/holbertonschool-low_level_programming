#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Prints the binary representation of an unsigned long int
 * @n: The number to be converted and printed in binary format
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >>  1);
	}
	_putchar((n & 1) + '0');
}
