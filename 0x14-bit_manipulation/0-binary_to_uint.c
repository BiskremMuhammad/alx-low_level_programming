#include <stddef.h>
#include "main.h"

/**
 * check_valid_string - check string for validation
 * @b: the string
 *
 * Return: {int} 1 if valid 0 otherwise
 */
int check_valid_string(const char *c)
{
	if (c == NULL)
		return (0);
	while (*c)
	{
		if (*c != '1' && *c != '0')
			return (0);
		c++;
	}

	return (1);
}


/**
 * binary_to_uint - fn name
 * @b: param1
 *
 * Return: {unsigned int}
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int length = 0, base = 1;

	if (!check_valid_string(b))
		return (0);
	while (b[length] != '\0')
		length++;
	while (length)
	{
		decimal += ((b[length - 1] - '0') * base);
		base *= 2;
		length--;
	}

	return (decimal);
}
