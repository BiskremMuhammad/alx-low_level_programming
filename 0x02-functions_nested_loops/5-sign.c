#include <main.h>

/**
 * print_sign - fn to check if given number is greater/less than or equals to zero
 * @n: the number
 *
 * Return: 1 when n is positive, -1 when negative or 0 for zero
 */
int print_sign(int n)
{
	_putchar(n > 0 ? '+' : n == 0 ? '0' : '-');
	return (n > 0 ? 1 : n == 0 ? 0 : -1);
}
