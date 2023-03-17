#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int nums = '0';

	while (nums <= '9')
	{
		putchar(nums);
		if (nums != '9')
		{
			putchar(',');
			putchar(' ');
		}
		nums++;
	}
	putchar('\n');
	return (0);
}
