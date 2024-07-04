#include <stdlib.h>
#include <stdio.h>

/**
 * main -program that prints its name
 * @argc: variable
 * @argv: pointeur
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j;
	int somme;
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	somme = (i * j);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		printf("%d\n", somme);
		return (0);
	}
}
