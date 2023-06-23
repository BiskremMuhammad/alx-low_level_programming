#include <stdio.h>

/**
 * positive_or_negative - fn to check if number is positive or negative
 *
 * Return: 1, if positive, -1 if negative, 0 otherwise
 */
int positive_or_negative(int n)
{
	return (n > 0 ? 1 : n < 0 ? -1 : 0);
}
