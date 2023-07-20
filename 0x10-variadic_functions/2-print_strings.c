#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - variadic fn to print all passed strings joined by separator
 * @separator: separator between numbers
 * @n: number of strings passed as arguments
 * @...: variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	char *str;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		strcpy(str, va_arg(a, char *));
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
