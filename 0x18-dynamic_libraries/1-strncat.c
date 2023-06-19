#include "main.h"

/**
 * _strncat - concatonates two strings
 * @dest: concatonation string destination
 * @src: concatonation string source
 * @n: number of characters to append
 * Return: Returns the concatonated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srclen++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
