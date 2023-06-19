#include "main.h"

/**
 *length - finds the length of a string
 *@s: string
 *Return: returns length
 */

int length(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}



/**
 *_strcpy - copies a string pointed to by src including '\0'
 *to a buffer pointed to by @dest
 *@dest: buffer to copy the string to
 *@src: the source string
 *Return: copy of the original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= length(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
