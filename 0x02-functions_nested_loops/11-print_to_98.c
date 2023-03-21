#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints n to 98
 *@n: the integer argument
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n++;
	}
	while (n > 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n--;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
