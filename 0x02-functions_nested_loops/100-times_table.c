#include "main.h"

/**
 * print_times_table - print times table to number n
 * @n: max number
 */
void print_times_table(int n)
{
	int m, i;

	for (m = 0; m <= n && n <= 15 && n >= 0; m++)
	{
		for (i = 0; i <= n; i++)
		{
			if (i == 0)
				_putchar('0' + i);
			else
			{
				_putchar(',');
				_putchar((m * i) > 100 ? '0' + ((m * i) / 100) : ' ');
				_putchar((m * i) > 10 ? '0' + ((m * i) / 10) : ' ');
				_putchar('0' + ((m * i) % 10));
			}
		}
		_putchar('\n');
	}
}
