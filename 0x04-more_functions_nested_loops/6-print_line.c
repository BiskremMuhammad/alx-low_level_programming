#include "main.h"

/**
 * print_line - fn to print a line _ to a distance n
 * @n: distance
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
