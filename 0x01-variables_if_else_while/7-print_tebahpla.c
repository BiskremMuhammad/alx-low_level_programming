#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
