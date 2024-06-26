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
	int len = 0;
	int x;

	while (s[len] != '\0')
	{
		len++;
	}

	for (x = len -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	
	_putchar('\n');
}
