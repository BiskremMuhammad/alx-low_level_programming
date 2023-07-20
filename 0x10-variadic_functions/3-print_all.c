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
	va_start(a, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(a, double));
				break;
			case 's':
				{
					char *str = va_arg(a, char *);

					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
				}
		}
		if (i < strlen(format) - 1 && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(a);
}
