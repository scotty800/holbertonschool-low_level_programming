#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat -print
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int sizeline = strlen(dest);

	while (src[i] != '\0')
	{
		dest[sizeline + i] = src[i];
		i++;
	}
	dest[sizeline + i] = '\0';

	return (dest);
}
