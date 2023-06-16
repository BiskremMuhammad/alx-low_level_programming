#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar((char) n);
	putchar('\n');

	return (0);
}
