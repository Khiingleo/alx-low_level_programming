#include <stdio.h>

/**
 *main - print sum of even of fionacci sequence up to 4million
 *Return: Always 0
 */

int main(void)
{
	int totSum, a, b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			totSum += sum;
		}
	}
	printf("%d\n", totSum);
	return (0);
}
