#include "main.h"

/**
 * rev_string -print
 * @s: is the variable
 * Return:
 */

void rev_string(char *s)
{
	int len = 0;
	int x, i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (x = 0, i = len - 1; x < i; x++, i--)
	{
		tmp = s[x];
		s[x] = s[i];
		s[i] = tmp;
	}

}
