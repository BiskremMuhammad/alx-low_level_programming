#include "main.h"
#include <stdio.h>

/**
 * natural - print natural numbers to 1024 & is multiple by 3 | 5
 */
void natural(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}

/**
 * main - Entry point
 *
 * Return: 0 void
 */
int main(void)
{
	natural();

	return (0);
}
