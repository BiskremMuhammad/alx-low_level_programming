#include "main.h"
#include <stdio.h>

/**
 * fibonacci - print sum of even valued fibonacci numbers
 */
void fibonacci(void)
{
	long sum, f, prev, b4Prev;

	sum = prev = b4Prev = 0;

	for (f = prev = 1; i < 50; f = b4Prev + prev)
	{
		if (f > 4000000)
			break;
		if (f % 2 == 0)
			sum += f;
		b4Prev = prev;
		prev = f;
	}
	printf("%ld\n", sum);
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
