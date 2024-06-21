#include "main.h"

/**
 * _isalpha -verifi si c est en min ou maj si oui return 1
 *@c: est le caracter
 *Return: 1 si il est en min et maj, 0 autre
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
