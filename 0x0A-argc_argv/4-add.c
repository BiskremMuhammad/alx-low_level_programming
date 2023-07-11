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
	int i, res;

	res = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		res += atoi(argv[i]); 
	}

	printf("%d\n", res);
	return (0);
}
