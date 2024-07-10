#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog -display la structur dog
 * @d: print la structur
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf(" name : (nil)\n");
	}
	else
	{
		printf("Name : %s\n", d->name);
	}
	if (d->age < 0)
	{
		printf("age : (nil)\n");
	}
	else
	{
		printf("age : %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("owner : (nil)\n");
	}
	else
	{
		printf("owner : %s\n", d->owner);
	}
}
