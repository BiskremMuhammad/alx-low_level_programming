#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - fn to print the last digit of a number
 * @n: the number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	printf("last digit of %d", INT_MIN);
	_putchar('0' + (abs(n) % 10));
	return (abs(n) % 10);
}
