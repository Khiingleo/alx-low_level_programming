#include "main.h"

/**
 *puts2 - prints evry other number ie 1,2,3,4,5 = 1,3,5 etc
 *@str: string containing the numbers
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
