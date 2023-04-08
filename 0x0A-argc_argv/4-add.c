#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the addition of positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 1 if number contains symbols that are non digits
 *         0 if otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int num, digit;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);
	return (0);
}
