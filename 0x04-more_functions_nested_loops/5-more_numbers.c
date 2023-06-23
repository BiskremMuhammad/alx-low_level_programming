#include "main.h"

/**
 * more_numbers - fn to print numbers from 0-14, 10 times
 */
void more_numbers(void)
{
	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
			_putchar('0' + x);
		_putchar('\n');
	}
}
