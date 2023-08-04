#include "main.h"

/**
 * clear_bit - fn name
 * @n: n
 * @index: idx
 *
 * Return: {int}
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int s;
	unsigned long int mask;

	s = sizeof(unsigned long int) * 8;
	if (index >= s)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
