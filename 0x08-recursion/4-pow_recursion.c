#include "main.h"

/**
 * _pow_recursion - fn to return result of x ^ y
 * @x: base number
 * @y: power
 *
 * Return: {int} result of x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * y + _pow_recursion(x, y - 1));
}
