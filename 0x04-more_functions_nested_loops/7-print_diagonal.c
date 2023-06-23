#include "main.h"

/**
 * print_diagonal - fn to print a diagonal line \ to a distance n
 * @n: distance
 */
void print_diagonal(int n)
{
	int x, y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
