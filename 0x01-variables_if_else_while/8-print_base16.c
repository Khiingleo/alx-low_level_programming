#include <stdio.h>

/**
 * main - Entry point
 * Result: Always 0
 */

int main(void)
{
	int nums = '0';
	char alpha = 'a';

	/*a hexidecimal is base 16 ie 0-9a-f*/

	while (nums <= '9')
	{
		putchar(nums);
		nums++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}

