#include "main.h"
#include <stdio.h>

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
				_putchar("%d", i);
			else
			{
				printf(",");
				if (n * i < 10)
					printf("  ");
				else if (n * i < 100)
					printf(" ");

				printf("%d", (n * i));
			}
		}
		printf("\n");
	}
}
