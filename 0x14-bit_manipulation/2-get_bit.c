#include "main.h"

/**
 * get_bit - fn to get bit of a number at index
 * @n: number
 * @index: number idx
 * Return: {int} the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int s;
	unsigned long int mask;

	s = sizeof(n) * 8;
	if (index >= s)
		return (-1);

	mask = 1UL << index;
	if (n & mask)
		return (1);
	return (0);
}
