#include <stdio.h>
#include "main.h"

/**
 * _islower -verifi si c est en min si oui return 1
 *@c: est le caracter
 *Return: 1 si il est en min, 0 autre
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
