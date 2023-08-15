#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the new dogs
 * @d: pointer to the new dog to be free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
