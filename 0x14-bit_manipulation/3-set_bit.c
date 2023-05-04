#include "main.h"

/**
 * set_bit - set bit to 1 at given index
 * @n: pointer to the number
 * @index: index to set the value at
 * Return: -1 if error occurs
 *          1 if successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
