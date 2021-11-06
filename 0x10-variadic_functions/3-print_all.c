#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints
 *
 * @format: a list passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	char *str, spec;
	int x = 0;

	va_start(ap, format);
	while (format != NULL && format[x] != '\0')
	{
		spec = format[x];
		switch (spec)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[x + 1] != '\0' &&
			(spec == 'c' || spec == 'f' || spec == 'i' || spec == 's'))
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(ap);
}
