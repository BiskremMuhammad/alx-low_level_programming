#include "main.h"

/**
 * main - Entry Point
 * @argc: script arguments count
 * @argv: script passed arguments
 *
 * Return: {int}
 */
int main(int argc, char *argv[])
{
	int x;

	if (argv[0])
		x = 100;

	printf("%d\n", argc);

	return (0);
}
