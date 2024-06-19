#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: Allways 0 (Succes)
 */

/* betty style doc for function main goes there */

int main(void)
{

	int a;

	int b;

	int c;

	a = 0;
	b = 1;
	c = 2;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				putchar(' ');
			}
			c++;
		}
		b++;
	}
	a++;
		return (0);
}
