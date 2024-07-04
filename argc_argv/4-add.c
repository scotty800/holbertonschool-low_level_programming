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
	int somme = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

			somme = somme + atoi(argv[i]);
		}
	}

	printf("%d\n", somme);
	return (0);

}
