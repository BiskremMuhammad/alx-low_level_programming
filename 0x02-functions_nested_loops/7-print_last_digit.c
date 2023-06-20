#include "main.h"

/**
 * print_last_digit - fn to print the last digit of a number
 * @n: the number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
