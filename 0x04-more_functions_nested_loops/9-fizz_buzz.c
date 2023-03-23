#include <stdio.h>

/**
 *main - print numbers 1-100 
 *replace multiples of 3 with Fizz
 *replace multiples of 5 with Buzz
 *replace multiples of 3 AND 5 with FizzBuzz
 *Return: Return 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
