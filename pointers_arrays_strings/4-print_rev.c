#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev -print
 * @s: is the variable
 * Return:
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int x;

	for (x = len - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
