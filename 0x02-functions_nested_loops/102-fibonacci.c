#include "main.h"
#include <stdio.h>

/**
 * fibonacci - print first 50 fibonacci numbers
 */
void fibonacci(void)
{
	long i, f, prev;

	i = 0;

	for (f = 1; i <= 50; f += prev)
	{
		if (i == 50)
			printf("%d", f);
		else
			printf("%d, ", f);

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
