#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers starting with 1 and 2
 *Return: Always 0
 */

int main(void)
{
	int count;
	long a = 0, b = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = a + b;
		printf("%li", sum);

		a = b;
		b = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
