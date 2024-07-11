#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * free_dog -display la structur dog
 * @d: pointeur de struct
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
