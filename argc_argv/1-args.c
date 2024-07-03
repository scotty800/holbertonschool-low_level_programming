#include "main.h"
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
	(void)**argv;
	printf("%d\n", argc -1);
	{
		return (0);
	}
}
