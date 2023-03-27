#include "main.h"

/**
 *swap_int - swaps the value of two integer
 *@a: first integer to swap
 *@b: second integer to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
