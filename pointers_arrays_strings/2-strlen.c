#include "main.h"
#include <string.h>

/**
 * _strlen -print
 * @s: is the variable n
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	length++;
	{
		return (length);
	}
}
