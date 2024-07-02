#include "main.h"

/**
 * _puts_recursion -priny that encodes a string
 * @s: pointe vers un tabl caract
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
