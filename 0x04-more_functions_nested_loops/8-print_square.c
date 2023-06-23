#include "main.h"

/**
 * print_square - fn to print a square of #
 * @size: square size
 */
void print_square(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		if (y < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
