#include "main.h"

/**
 * get_bit - fn name
 * @n: param1
 * @index: param2
 *
 * Return: {int}
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
