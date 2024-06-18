#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: Allways 0 (Succes)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar(num + '0');
	}

	for (num = 0; num < 6; num++)
	{
		putchar(num + 'a');
	}

	putchar('\n');
	return (0);
}
