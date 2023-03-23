#include "main.h"

/**
 *print_triangle - print triangle with # character with given size
 *@size: size to print
 */

void print_triangle(int size)
{
	int tri, counter;

	if (size > 0)
	{
		for (counter = 1; counter <= size; counter++)
		{
			for (tri = size - counter; tri > 0; tri--)
			{
				_putchar(' ');
			}

			for (tri = 0; tri < counter; tri++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
