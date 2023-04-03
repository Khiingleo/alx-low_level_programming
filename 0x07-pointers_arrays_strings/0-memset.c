#include "main.h"

/**
 * _memset - fills n number of bytes of memory with a constant value
 * @s: pointer to the memory area
 * @b: constant value
 * @n: number of bytes
 * Return: returns pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* guarantees a positive number*/

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
