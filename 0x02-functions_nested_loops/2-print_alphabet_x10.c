#include "main.h"

/**
 * 
 *
 */

void print_alphabet_x10(void)
{
	char alpha;
	int nums;

	for (nums = 0; nums <= 10; nums++)
	{
		for(alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		putchar('\n');
	}
}
