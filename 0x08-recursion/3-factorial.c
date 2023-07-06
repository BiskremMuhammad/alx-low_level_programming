#include "main.h"

/**
 * factorial - fn to return the factorial of a number
 * @n: the number to get its factorial
 *
 * Return: the factorial sum
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
