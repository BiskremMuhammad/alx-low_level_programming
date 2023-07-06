#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - fn to print a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	char sc[100];

	printf("%c", s[strlen(s) - 1]);

	if (strlen(s) > 0)
	{
		strncpy(sc, s, strlen(s) - 1);
		_print_rev_recursion(sc);
	}
}
