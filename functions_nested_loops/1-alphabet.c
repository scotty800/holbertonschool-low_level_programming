#include <stdio.h>
#include "main.h"

/**
 *print_alphabet -display l'alphabet de a jusqu'a z
 *
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
}
