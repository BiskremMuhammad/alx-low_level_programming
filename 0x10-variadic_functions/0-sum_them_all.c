#include "variadic_functions.h"

/**
 * sum_them_all - variadic fn to sum all args
 * @n: number of args
 *
 * Return: {int} sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum;

	if (n <= 0)
		return (0);

	va_start(args, n);
	sum = 0;
	for (i = va_arg(args, int); ; i = va_arg(args, int))
		sum += i;

	return (sum); 
}
