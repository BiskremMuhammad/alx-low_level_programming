#include "main.h"
#include <stdio.h>

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
				printf("%d", i);
			else
			{
				printf(",");
				if (m * i < 10)
					printf("   ");
				else if (m * i < 100)
					printf("  ");
				else if (m * i < 1000)
					printf(" ");

				printf("%d", (m * i));
			}
		}
		printf("\n");
	}
}
