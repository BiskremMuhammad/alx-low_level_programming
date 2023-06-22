#include "main.h"

/**
 * times_table - print times table to number 9
 */
void times_table(void)
{
	int n, i;

	for (n = 0; n <= 9; n++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (i == 0)
				_putchar('0' + i);
			else
			{
				_putchar(',');
				_putchar((n * i) > 100 ? '0' + ((n * i) / 100) : '.');
				_putchar((n * i) > 10 ? '0' + ((n * i) / 10) : '.');
				_putchar('0' + ((n * i) % 10));
			}
		}
		_putchar('\n');
	}
}
