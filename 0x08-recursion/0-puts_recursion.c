#include "main.h"

/**
 * _puts_recursion - prints a string out to the stdout using recursion
 *@s: string to be printed out
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
