#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ldOfn = n % 10;
	if (ldOfn == 0)
		printf("Last digit of %d is %d and is 0\n", n, ldOfn);
	else if (ldOfn > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ldOfn);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldOfn);

	return (0);
}
