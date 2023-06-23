#include <stdio.h>

/**
 * fizz_buzz - fn to print fizz buzz style question
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 3)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");

		if (i % 3 != 0 && i % 5 != 0)
			printf("%d ", i);
		else if (i < 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	fizz_buzz();

	return (0);
}
