#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcpy -print
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);


}
