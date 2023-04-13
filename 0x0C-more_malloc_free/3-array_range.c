#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: last value of the array
 * @max: first value of the array
 * Return: returns a pointer to array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
