#include "main.h"

/**
 * get_endianness - fn name
 *
 * Return: {int}
 */
int get_endianness(void)
{
	unsigned int tmp = 1;
	char *ind = (char *)&tmp;

	if (*ind)
		return (1);
	return (0);
}
