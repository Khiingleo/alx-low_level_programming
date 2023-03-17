#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char reverseAlpha = 'z';

	while (reverseAlpha >= 'a')
	{
		putchar(reverseAlpha);
		reverseAlpha--;
	}
	putchar('\n');
	return (0);
}
