#include "main.h"

/**
 * factorial - returns the factorial of n
 * @n: the integer argument
 * Return: returns -1 if n == 0 and 1 if n == 0 or n == 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
