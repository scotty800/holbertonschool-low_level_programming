#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String containing the binary number
 * Return: The converted number, or 0
 * if there is an invalid character in b or b is NULL
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >>  1);
	}
	_putchar((n & 1) + '0');
}
