#include "variadic_functions.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints
 * @format: args passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	char *str;
	int x = 0;

	va_start(ap, format);
	for(x = 0; format != NULL && format[x] != '\0'; x++)
	{

		switch (format[x])
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
			(format[x] == 'c' || format[x] == 'f' || format[x] == 'i' || format[x] == 's'))
			printf(", ");

	}
	printf("\n");
	va_end(ap);
}
