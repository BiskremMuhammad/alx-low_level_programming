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
		printf("Name: %s\n", (d->name != NULL ? d->name : "(nil)"));
		if (d->age != -1.0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		printf("Owner: %s\n", (d->owner != NULL ? d->owner : "(nil)"));
	}
}
