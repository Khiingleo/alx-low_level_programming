#include "main.h"

/**
 *print_last_digit - prints the last igit of a number
 *@n: integer argument
 *Return: Returns last digit of the number
 */

int print_last_digit(int n)
{
	int num;

	num = n % 10;

	if (num < 0)
	{
		num *= -1; /*ie num = num * -1 */
	}
	_putchar('0' + num);
	return (num);
}
