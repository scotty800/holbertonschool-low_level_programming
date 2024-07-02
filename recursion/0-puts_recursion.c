#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_recursion -priny that encodes a string
 * @s: pointe vers un tabl caract
 */

void _puts_recursion(char *s)
{
	int i;
	if (s[i] == '\0')
	{
		_putchar(s[i]);
		_putchar(s[i] + 1);
	}
}
