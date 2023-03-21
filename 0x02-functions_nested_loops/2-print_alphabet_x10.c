#include "main.h"

/**
 *print_alphabet_x10 - prints lower case alphabet 10 times 
 *Return: Return 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int nums;

	for (nums = 1; nums <= 10; nums++)
	{
		for(alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
