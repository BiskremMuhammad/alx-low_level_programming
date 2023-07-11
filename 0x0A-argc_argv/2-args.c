#include "main.h"

/**
 * main - Entry Point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int}
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
