#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * clear_bit - Clears the value of a bit to 0 at a given index
 * @n: Pointer to the number to modify
 * @index: The index of the bit to clear, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);

}
