#include "main.h"

/**
 * _strspn - returns the length of a string that matches the values
 * @s: string to search
 * @accept: the target matches
 * Return: the number of bytes that matches
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
		}

		if (accept[j] == '\0')
			break;
	}
	return (length);
}
