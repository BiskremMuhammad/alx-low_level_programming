#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 void
 */
int main (void)
{
	char alpha[27];
	alpha = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	for (i = 0; i < strlen(alpha); i++)
	       putchar(alpha[i]);
	putchar('\n');	
}
