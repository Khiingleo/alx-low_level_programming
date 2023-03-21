#include "main.h"

/**
 *print_times_table - prints time table of input starting from 0
 *@n: integer argument
 */

void print_times_table(int n)
{
	int num, times, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (times = 1; times <= n; times++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * times;

				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
