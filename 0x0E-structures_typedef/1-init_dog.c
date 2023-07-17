#include "dog.h"

/**
 * init_dog - fn to initialize a dog object
 * @d: dog object pointer
 * @name: name of the dog to change
 * @age: the new age to change
 * @owner: new dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
