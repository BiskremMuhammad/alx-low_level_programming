#include <stdio.h>

void print_alphabet(void);

/**
 * print_alphabet - to print alphabet to screen
 */
void print_alphabet(void)
{
	char c;

	for(c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);
}
