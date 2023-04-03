#include "main.h"

/**
 * _strchr - finds the first occurrence of c in the string
 * @s: string to search for the character c
 * @c: character to search for
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		/*the above code adds i to the address of the first element of s*/
		/*thereby returning a new pointer to the resulting memory location*/
	}
	return ('\0');
}
