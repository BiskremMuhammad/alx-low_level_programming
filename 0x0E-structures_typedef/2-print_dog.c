#include <stdio.h>
#include "dog.h"

/**
 * print_dog - fn to print struct dog
 * @d: the dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name != NULL ? d->name : "(nill)"));
		printf("Name: %f\n", (d->age != NULL ? d->age : "(nill)"));
		printf("Name: %s\n", (d->owner != NULL ? d->owner : "(nill)"));
	}
}
