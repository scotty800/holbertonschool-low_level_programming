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
	int n;
	int lastN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastN = n % 10;

	printf("Last digit of %d is",n);

	if (lastN > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5\n", n, lastN);
	}

	else if (lastN == 0)
	{
		printf("Last digit of %d is %d  and is 0\n", n, lastN);
	}

	else if (lastN < 6 && lastN != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastN);
	}

	/* your code goes there */

	return (0);
}
