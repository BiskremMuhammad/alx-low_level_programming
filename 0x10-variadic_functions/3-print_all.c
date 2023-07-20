#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - variadic fn to print anything passed to it
 * @format: string describes passed args
 * @...: variable args
 */
void print_all(const char * const format, ...)
{
	va_list a;
	size_t i;

	i = 0;
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				break;
			case 's':
				{
					char *str = va_arg(a, char *);

					if (str == NULL)
						printf("(nil)");
					if (str != NULL)
						printf("%s", str);
					break;
				}
			default:
				break;
		}
		i++;
	}

	printf("\n");
	va_end(a);
}
