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
	printf("the whole number is: %d", n);
	_putchar('0' + (abs(n) % 10));
	return (abs(n) % 10);
}
