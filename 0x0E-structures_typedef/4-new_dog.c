#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - fn to create a new dog obj
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: {dog_t} pointer to the created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
