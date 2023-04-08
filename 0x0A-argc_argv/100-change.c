#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins for an amount of money
 * @argc: arguments
 * @argv: array of arguments
 * Return: 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents / 1;

	printf("%d\n", coins);
	return (0);
}
