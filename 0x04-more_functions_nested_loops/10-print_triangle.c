#include "main.h"

/**
 * print_triangle - fn to print a triangle of #
 * @size: tiangle size
 */
void print_triangle(int size)
{
	int x, y;

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			if (x < size - y - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		if (y < size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
