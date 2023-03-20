#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - freeing dog
 * @d: dog to be freed
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