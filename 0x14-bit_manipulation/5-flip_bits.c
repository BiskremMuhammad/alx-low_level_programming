#include "main.h"

/**
 * flip_bits - fn name
 * @n: p1
 * @m: p2
 *
 * Return: {unsigned int}
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int c = 0;

	while (flipped)
	{
		if (flipped & 1)
			c++;
		flipped  >>= 1;
	}
	return (c);
}
