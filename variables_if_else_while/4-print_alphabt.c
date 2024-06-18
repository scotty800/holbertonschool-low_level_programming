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

	for (alpha = 'a'; alpha <= 'd'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'f'; alpha <= 'p'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'r'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}

	printf("\n");
	return (0);
}
