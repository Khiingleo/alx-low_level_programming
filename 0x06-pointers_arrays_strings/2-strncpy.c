#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string to copy from
 * @n: number of characters to copy
 * Return: returns the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
