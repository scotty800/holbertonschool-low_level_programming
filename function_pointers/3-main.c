#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -fonction man
 * @argc: nombre d'arguments passées au programme
 * @argv: tableau de chaines de caractères representant les arg
 * Return: 0 si tous vas bien
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operation = get_op_func(argv[2]);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0)
	{
		print("Error\n");
		exit(100);
	}
	result = operation(a, b);
	printf("%d\n", result);
	return (0);

}
