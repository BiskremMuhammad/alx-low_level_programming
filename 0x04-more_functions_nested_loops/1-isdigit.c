#include "main.h"
#include <ctype.h>

/**
 * _isdigit - fn to check if character is digit
 * @c: the character to check
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(char c)
{
	return isdigit(c) ? 1 : 0;
}
