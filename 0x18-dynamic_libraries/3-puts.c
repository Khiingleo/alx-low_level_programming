#include "main.h"

/**
 *_puts - prints out a string followed by a new line
 *@str: the string to print
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
