#include "main.h"
#include <stdio.h>

/**
 * fibonacci - print first 50 fibonacci numbers
 */
void fibonacci(void)
{
	long i, f, prev, b4Prev;

	i = prev = b4Prev = 0;

	for (f = prev = 1; i < 50; f = b4Prev + prev)
	{
		if (i == 49)
			printf("%ld", f);
		else
			printf("%ld, ", f);

		b4Prev = prev;
		prev = f;
		i++;
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
