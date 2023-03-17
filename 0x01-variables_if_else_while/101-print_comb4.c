#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int hundred;
	int tens;
	int ones;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (tens = (hundred + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(hundred);
				putchar(tens);
				putchar(ones);

				if (hundred != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
