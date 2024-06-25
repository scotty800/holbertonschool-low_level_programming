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
		else
		{
			printf("nombre");
		}

		printf("\n");
	}
	return (0);
}
