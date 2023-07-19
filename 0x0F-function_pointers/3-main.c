#include "3-calc.h"

/**
 * main - Entry Point
 * @argc: args count
 * @argv: args values
 *
 * Return: {int} 0 void
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	// check if operator is not valid
	if (
			argv[2] != "+" &&
			argv[2] != "-" &&
			argv[2] != "*" &&
			argv[2] != "/" &&
			argv[2] != "%"
	)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2] == "/" || argv[2] == "%") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", res);

	return (0);
}
