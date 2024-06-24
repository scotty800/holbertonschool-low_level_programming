#include "main.h"

/**
 * more_numbers -print 10 times the numbers, followed by a new line.
 */

void more_numbers(void)
{
	int num, n;

	for (num = 0; num <= 9; num++)
	{
		for (n = 0; n <= 14;  n++)
		{
			if (n >= 14)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
		}
		_putchar('\n');
	}
}
