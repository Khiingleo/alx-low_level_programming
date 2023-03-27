#include "main.h"

/**
 *print_rev - prints a string in reverse
 *@s: string to print
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s)
	{
		len++;
		s++;
	}

	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
