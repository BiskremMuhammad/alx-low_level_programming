#include "3-calc.h"
#include <string.h>

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
	int (*op)(int, int);

	/* check for not valid number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* check if operator is not valid */
	op = *get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	/* check if dividing by or modulus of 0 */
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	res = op(num1, num2);
	printf("%d\n", res);

	return (0);
}
