#include "main.h"
#include <ctype.h>

/**
 * _isalpha - fn to check if passed character is alphabeticial
 * @c: the charcter under check
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(char c)
{
	return (isalpha(c) ? 1 : 0);
}
