#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array using interpolation
 * @array: pointer to the first element of the array
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			   (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
