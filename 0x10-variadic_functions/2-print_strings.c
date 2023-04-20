#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @seperator: string to be printed in between the strings
 * @n: number of strings passed
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;/*to hold the string*/

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		/*char * because we are printing strings*/

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);

	}
	printf("\n");

	va_end(list);
}
