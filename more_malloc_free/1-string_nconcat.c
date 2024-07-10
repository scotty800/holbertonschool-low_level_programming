#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat -concatene deux chaines en utilisant n octets
 * @s1: la premier chaine de carateres
 * @s2: la seconde chaine de caracyres
 * @n: le nombre d'octets de s2 a concatener a s1
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, index2;
	unsigned int len1, len2;
	unsigned int oct = n;
	char *ptr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	if (oct >= len2)
	{
		oct = len2;
	}
	
	ptr = malloc(sizeof(char) * (len1 + oct + 1));

	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
	{
		ptr[index] = s1[index];
	}

	for (index2 = 0; index2 < oct; index2++)
	{
		ptr[index + index2] = s2[index2];
	}

	ptr[index + index2] = '\0';

	return (ptr);
}
