#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * each element of an array
 * @array: the given array
 * @size: the size of the array
 * @action: the pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
	/*the use of size_t i; is to match the data type of the size and iterate*/
}
