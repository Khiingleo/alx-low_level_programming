#include "main.h"

/**
 *print_numbers - prints numbers form 0 to 9
 */

void print_numbers(void)
{
	int i;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
