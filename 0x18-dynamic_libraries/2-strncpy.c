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
	int i, srclen = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		srclen++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = srclen; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
