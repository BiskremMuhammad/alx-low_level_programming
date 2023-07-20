#include "variadic_functions.h"

/**
 * print_numbers - variadic fn to print all passed numbers joined by separator
 * @separator: separator between numbers
 * @n: number of numbers passed as arguments
 * @...: variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int i;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
