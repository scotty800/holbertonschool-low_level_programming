#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 -print
 * @str: is the variable
 * Return:
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
	if (len % 2 == 0)
	{
	_putchar(str[len]);
	}
	len++;
	}
	_putchar('\n');
}
