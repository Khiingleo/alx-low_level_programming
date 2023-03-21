#include "main.h"

/**
 *times_table - prints out the multiplication table
 */

void times_table(void)
{
	int num, times, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (times = 0; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * times;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
