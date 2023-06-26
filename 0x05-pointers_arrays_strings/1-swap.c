#include "main.h"

/**
 * swap_int - fn to swap two integers values
 * @a: first var
 * @b: second var
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
