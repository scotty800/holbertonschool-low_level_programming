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
	int x, len, temp;

	len = strlen(s);

	for (x = 0; x < len / 2; x++)
	{
		temp = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = temp;
	}
}
