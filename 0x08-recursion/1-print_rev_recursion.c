#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - fn to print a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	char sc[100];

	memset(sc, '\0', sizeof(sc));
	if (strlen(s) > 0)
		printf("%c", s[strlen(s) - 1]);

	if (strlen(s) > 1)
	{
		strncpy(sc, s, strlen(s) - 1);
		_print_rev_recursion(sc);
	}
}
