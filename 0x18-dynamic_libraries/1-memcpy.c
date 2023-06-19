#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 * @dest: the pointer to the memory area for source to be copied into
 * @src: the source to copy from
 * @n: the number of bytes to copy
 * Return: returns the pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
