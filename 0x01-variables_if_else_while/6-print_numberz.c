#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	putchar('\n');
	return (0);
}
