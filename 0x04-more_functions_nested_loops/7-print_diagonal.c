#include "main.h"

/**
 *print_diagonal - prints diagonal line n number of times
 *@n: number of times to print
 */

void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
