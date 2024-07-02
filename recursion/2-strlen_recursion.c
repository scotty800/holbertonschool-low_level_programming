#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -print le nombre
 *@s: pointeur
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
