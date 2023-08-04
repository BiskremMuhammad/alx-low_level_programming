#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	int size, zeros;
	unsigned long int mask;

	size = sizeof(n) * 8;
	mask = 1UL << (size - 1);
	zeros = 1;
	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			zeros = 0;
		}
		else
		{
			if (!zeros)
				_putchar('0');
		}

		mask >>= 1;
	}

	if (zeros)
		_putchar('0');
}
