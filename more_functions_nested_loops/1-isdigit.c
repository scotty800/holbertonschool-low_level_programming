#include "main.h"
#include <ctype.h>
/**
 * _isdigit -verifi si c est en min si oui return 1
 *@c: est le caracter
 *Return: 1 si il est en min, 0 autre
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);

}
