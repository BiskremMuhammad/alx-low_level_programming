#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - to print alphabet in lowercase
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
