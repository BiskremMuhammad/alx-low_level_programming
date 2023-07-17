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

	p->name = (char *)malloc(sizeof(strlen(name) + 1));
	p->owner = (char *)malloc(sizeof(strlen(owner) + 1));
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}

	strcpy(p->name, name);
	strcpy(p->owner, owner);
	p->age = age;

	return (p);
}
