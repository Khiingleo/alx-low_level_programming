#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals of a square matrix of integers
 * @a: the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, row;
	int sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		sum1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		sum2 += a[i];
	}

	printf("%d, %d\n", sum1, sum2);

}
