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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (argv[1] + argv[2]));
	return (0);
}
