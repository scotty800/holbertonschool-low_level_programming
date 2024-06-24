#include "main.h"
#include <ctype.h>

/**
 * _isupper -checks for uppercase character
 * @c: is the caracter
 * Return: 1 si il uppercase 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
