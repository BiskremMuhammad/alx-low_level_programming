#include <stdlib.h>
#include "dog.h"

/**
 * free_dogs - fn to free dog allocated space
 * @d: do pointer
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
