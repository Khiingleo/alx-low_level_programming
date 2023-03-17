#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int tens;
	int ones;
	int i;
	int j;

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
			for (i = tens; i <= '9'; i++)
			{
				for (j = (ones + 1); j <= '9'; j++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(i);
					putchar(j);

					if (!((tens == '9' && ones == '8') && (i == '9' && j == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
