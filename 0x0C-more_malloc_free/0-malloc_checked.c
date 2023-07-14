#include "main.h"

/**
 * malloc_checked - fn name
 * @b: p1
 *
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
