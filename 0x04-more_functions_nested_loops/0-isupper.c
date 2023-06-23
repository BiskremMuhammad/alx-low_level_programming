#include "main.h"
#include <ctype.h>

/**
 * _isupper - fn to check if character is upper case or not
 * @c: the input character under check
 *
 * Return: 1 when character is uppercase, 0 otherwise
 */
int _isupper(char c)
{
	return (isupper(c) ? 1 : 0);
}
