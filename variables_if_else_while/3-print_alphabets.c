#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: Allways 0 (Succes)
 */

/* betty style doc for function main goes there */

int main(void)
{
	char alpha;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
		putchar(tolower(alpha));
	}

	printf("\n");
	return (0);
}
