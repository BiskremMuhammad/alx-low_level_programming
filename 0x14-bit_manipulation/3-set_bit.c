#include "main.h"

/**
 * set_bit - fn fname
 * @n: n
 * @index: idx
 *
 * Return: {int}
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;
	unsigned long int mask;

	if (index >= s)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
