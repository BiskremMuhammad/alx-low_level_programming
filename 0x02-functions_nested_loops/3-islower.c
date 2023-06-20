#include "main.h"
#include <ctype.h>

/**
 * _islower - fn to check if character is lower case or not
 * @c: the input character under check
 *
 * Return: 1 when character is lowe, 0 otherwise
 */
int _islower(char c)
{
	return islower(c) ? 1 : 0;
}
