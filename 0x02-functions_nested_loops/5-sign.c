#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: number to check
 *Return: 1 if greater than 0, 0 if equal to 0 and -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
