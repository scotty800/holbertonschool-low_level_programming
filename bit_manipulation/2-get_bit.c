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
	int *bits = NULL;
	unsigned long int num = n;
	int i;

	bits = malloc(sizeof(int) * 64);
	if (!bits)
	{
		return (-1);
	}

	for (i = 0; i < 64; i++)
	{
		bits[i] = 0;
	}
	i = 0;
	while (num)
	{
		bits[i] = num % 2;
		num = num / 2;
		i++;
	}

	return (bits[index]);
}
