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
	char numb = '0';

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}

	printf("\n");
	return (0);
}
