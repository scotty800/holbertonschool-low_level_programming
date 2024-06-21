#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 -display l'alphabet de a jusqu'a z 10fois
 *
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int time;

	for (time = 1; time <= 10; time++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
