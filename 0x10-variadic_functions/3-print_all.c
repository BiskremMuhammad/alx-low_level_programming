#include "variadic_functions.h"
#include <string.h>
#include <stdbool.h>

/**
 * print_all - variadic fn to print anything passed to it
 * @format: string describes passed args
 * @...: variable args
 */
void print_all(const char * const format, ...)
{
	va_list a;
	size_t i;
	int d;
	char c;
	float f;
	bool v;

	i = 0;
	va_start(a, format);
	while (i < strlen(format))
	{
		v = false;
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(a, int);
				printf("%c", c);
				v = true;
				break;
			case 'i':
				d = va_arg(a, int);
				printf("%d", d);
				v = true;
				break;
			case 'f':
				f = (float)va_arg(a, double);
				printf("%f", f);
				v = true;
				break;
			case 's':
				{
					char *str = va_arg(a, char *);

					v = true;
					if (str == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", str);
					break;
				}
			default:
				break;
		}

		i++;
		if (i < strlen(format) && v)
			printf(", ");
	}

	printf("\n");
	va_end(a);
}
