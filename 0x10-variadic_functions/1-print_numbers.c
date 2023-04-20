#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string that delimtes each integer
 * @n: number of arguments
 */


void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(list);
}
