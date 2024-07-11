#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog -display la structur dog
 * @d: print la structur
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
