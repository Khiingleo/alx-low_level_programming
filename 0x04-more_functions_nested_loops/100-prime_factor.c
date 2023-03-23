#include <stdio.h>

/**
 *main - print the largest prime factor of 612852475143
 *Return: returns 0
 */

int main(void)
{
	long num = 612852475143;
	long div = 2;

	while (div < num)
	{
		if (num % div == 0)
		{
			num = num / div;
			div = 2;
		}
		else
		{
			div++;
		}
	}
	printf("%ld\n", num);
	return (0);
}
