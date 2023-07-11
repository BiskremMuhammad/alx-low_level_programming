#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isNumber(char number[]);

/**
 * isNumber - fn to check if string is an integer
 * @number: the number
 *
 * Return: {bool} checking result
 */
bool isNumber(char number[])
{
	int i;

	i = 0;

	if (number[0] == '-')
		i = 1;
	for (; number[i] != 0; i++)
	{
		if (!isdigit(number[i]))
			return (false);
	}
	return (true);
}

/**
 * main - Entry Point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int}
 */
int main(int argc, char *argv[])
{
	int cents, rem;

	if (argc != 2 || !isNumber(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1] <= 0))
	{
		printf("%d\n", 0);
		return (0);
	}

	cents = 0;
        rem = atoi(argv[1]);
	while (rem > 0)
	{
		if (rem >= 25)
			rem -= 25;
		else if (rem >= 10)
			rem -= 10;
		else if (rem >= 5)
			rem -= 5;
		else if (rem >= 2)
			rem -= 2;
		else
			rem -= 1;

		cents++;
	}

	printf("%d\n", cents);
	return (0);
}
