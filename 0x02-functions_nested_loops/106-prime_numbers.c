#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * primes - print first 50 prime numbers
 */
void primes(void)
{
	int i, x, p;
	bool isPrime;

	p = 1;
	printf("1, ");

	for (i = 2; p <= 50; i++)
	{
		isPrime = true;
		for (x = 2; x < i; x++)
		{
			if (i % x == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
		{
			if (p == 50)
				printf("%d", i);
			else
				printf("%d, ", i);
			p++;
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
	primes();

	return (0);
}
