#include "main.h"

/**
 * more_numbers -print 10 times the numbers, followed by a new line.
 */

void more_numbers(void)
{
	int num, n;

	for (num = 0; num <= 10; num++)
	{
		for (n = 0; n <= 14;  n++)
		{
			if (n <= 14)
			{
				_putchar((num % 10) + '0');
				_putchar((num / 10) + '0');
			}
		}
		_putchar('\n');
	}
}
