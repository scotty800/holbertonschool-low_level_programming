#include "main.h"
#include <stdio.h>

/**
 * main -printf frizz
 * Return: 0
 */

int main(void)
{
	int nombre;

	for (nombre = 1; nombre < 100; nombre++)
	{
		if (nombre == 100)
		{
			printf("Buzz");
		}
		if (nombre % 3 == 0 && nombre % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (nombre % 3 == 0)
		{
			printf("Fizz");
		}
		else if (nombre % 5 == 0)
		{
			printf("Buzz");
		}
		else if (nombre <= 9)
		{
			putchar('0' + nombre % 10);
			putchar(' ');
		}
		else
		{
			putchar('0' + nombre / 10);
			putchar('0' + nombre % 10);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
