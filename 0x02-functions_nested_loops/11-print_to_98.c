#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int i;
	
	i = n;

	do
	{
                printf("%d", i);
		
		if (i != 98)
			printf(", ");

                if (n > 98)
                        i--;
                else
                        i++;
	}
	while ((n > 98 && i > 98) || (n < 98 && i < 98));
	_putchar('\n');
}
