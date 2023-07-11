#include "main.h"
#include <ctype.h>

/**
 * main - Entry Point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int}
 */
int main(int argc, char *argv[])
{
	int i, res;

	res = 0;

	for (i = 0; i < argc; i++)
	{
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		res += atoi(argv[i]); 
	}

	printf("%d\n", res);
	return (0);
}
