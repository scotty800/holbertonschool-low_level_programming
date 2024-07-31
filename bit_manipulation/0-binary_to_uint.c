#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String containing the binary number
 * Return: The converted number, or 0
 * if there is an invalid character in b or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		val = (val << 1) + (b[index] - '0');
		index++;
	}

	return (val);
}
