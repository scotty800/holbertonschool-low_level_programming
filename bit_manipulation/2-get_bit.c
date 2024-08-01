#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number from which to retrieve the bit
 * @index: The index of the bit to retrieve, starting from 0
 * Return: The value of the bit at index index, or -1
 * if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);

}
