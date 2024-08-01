#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * flip_bits - Counts the number of bits you would need
 * to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits that need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);

}
