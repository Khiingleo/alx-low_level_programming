#include "search_algos.h"

/**
 * print - prints a string
 * @i: param
 * @j: param
 */
void print(size_t i, size_t j)
{
	printf("Value found between indexes [%ld] and [%ld]\n", i, j);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where the value is located
 *         if value not present or array is NULL return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size); /* square root of the array size is he jump*/
	size_t prev = 0;
	size_t i, curr = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	print(prev, curr < size ? curr : size - 1);

	for (i = prev; i <= (curr < size ? curr : size - 1); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);

}
