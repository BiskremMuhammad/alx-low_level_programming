#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int} 0 void, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int b, c;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *) main;
	for (c = 0; c < b; c++)
		printf("%02x", main_ptr[c]);

	printf("\n");

	return (0);
}
