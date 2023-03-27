#include "main.h"

/**
 *_strcpy - copies a string pointed to by src including '\0'
 *to a buffer pointed to by @dest
 *@dest: buffer to copy the string to
 *@src: the source string
 *Return: copy of the original source
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
