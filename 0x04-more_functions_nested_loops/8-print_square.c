#include "main.h"

/**
 *print_square - print squares # with given size
 *@size: number of squares to print
 */

void print_square(int size)
{
	int num, square;

	if (size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (square = 0; square < size; square++)
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
