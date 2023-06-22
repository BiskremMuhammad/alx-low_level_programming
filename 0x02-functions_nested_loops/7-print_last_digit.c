#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - fn to print the last digit of a number
 * @n: the number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	_putchar('0' + (llabs(n) % 10));
	return (llabs(n) % 10);
}
