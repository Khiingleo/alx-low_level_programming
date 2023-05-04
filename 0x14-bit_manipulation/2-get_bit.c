#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: the number
 * @index: index within the binary number
 * Return: the value of bit at index
 *         -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	bit = ((n >> index) & 1);

	return (bit);
}
