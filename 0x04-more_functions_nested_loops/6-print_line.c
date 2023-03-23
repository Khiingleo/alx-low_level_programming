#include "main.h"

/**
 *print_line - prints _ for n number of times
 *@n: the number of times to print
 */

void print_line(int n)
{
	int num;

	for (num = n; num > 0; num--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
