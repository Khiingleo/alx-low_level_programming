#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip to
 * get from one number to another
 * @n: the number
 * @m: number to flip 'n' to
 * Return: the necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
