#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts -print
 * @str: is the variable
 * Return:
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
