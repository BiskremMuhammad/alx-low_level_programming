#include "main.h"
#include <string.h>

/**
 * binary_to_uint - fn name
 * @b: p
 *
 * Return: {unsigned int}
 */
unsigned int binary_to_uint(const char *b)
{	
	unsigned int result;
	int length, i;

	if (b == NULL)
		return (0);

	length = strlen(b);
	result = 0;

	for (i = 0; i < length; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) + (b[i] - '0');
	}

	return (result);
}
