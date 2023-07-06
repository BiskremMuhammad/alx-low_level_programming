#include "main.h"
#include<math.h>

/**
 * _sqrt_recursion - fn to return the square root ofa number
 * @n: the number to get the quare root of
 *
 * Return: {int} result of square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0 || sqrt(n) > (int)sqrt(n))
		return (-1);

	return (sqrt(n));
}
