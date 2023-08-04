#include "main.h"

/**
 * flip_bits - fn name
 * @n: n
 * @m: m
 *
 * Return: {unsigned int}
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
