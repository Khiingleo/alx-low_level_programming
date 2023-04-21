#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: string of chars representing the data
 *         type to be printed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int f;
	char *str;
	va_list list;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				f = 0;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				f = 0;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				f = 0;
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				f = 0;
				break;
			default:
				f = 1;
				break;
		}
		if (format[i + 1] != '\0' && f == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(list);
}
