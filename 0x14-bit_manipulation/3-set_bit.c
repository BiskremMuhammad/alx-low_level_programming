#include "main.h"
#include <stddef.h>

/**
 * set_bit - fn name
 * @n: p1
 * @index: p2
 *
 * Return: {int} 1 on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
