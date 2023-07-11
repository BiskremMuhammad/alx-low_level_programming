#include "main.h"

/**
 * main - Entry point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int}
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = argv[1];
	y = argv[2];
	printf("%d\n", (x + y));
	return (0);
}
