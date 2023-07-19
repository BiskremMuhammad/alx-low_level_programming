#include "3-calc.h"

/**
 * get_op_func - fn to get the correspoinding operation function
 * @s: operator character
 *
 * Return: pointer to operation function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
