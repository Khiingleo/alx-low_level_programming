#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix of integers
 * @a: the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[i * size + i];
		add2 += a[i  * size + (size - i - 1)];
	}

	printf("%d. %d\n", add1, add2);
}
