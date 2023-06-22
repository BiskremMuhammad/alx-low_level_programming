#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * fibonacci - print first 50 fibonacci numbers
 */
void fibonacci(void)
{
	int i, x, f;
	bool isFibonacci;

	f = 1;
	printf("1, ");

	for (i = 2; f <= 50; i++)
	{
		isFibonacci = true;
		for (x = 2; x < i; x++)
		{
			if (i % x == 0)
			{
				isFibonacci = false;
				break;
			}
		}
		if (isFibonacci)
		{
			if (f == 50)
				printf("%d", i);
			else
				printf("%d, ", i);
			f++;
		}
	}
}

/**
 * main - Entry point
 *
 * Return: 0 void
 */
int main(void)
{
	fibonacci();

	return (0);
}
