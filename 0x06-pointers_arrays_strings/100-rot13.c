#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: returns encoded string
 */

char *rot13(char *str)
{
	char a[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		      'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		      'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		      'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		      'W', 'X', 'Y', 'Z'};
	char b[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		      'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		      'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		      'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		      'J', 'K', 'L', 'M'};

	int i, j;

	for (j = 0; str[j] != '\0'; j++)
	{
		i = 0;
		while (a[i] != '\0' && str[j] != a[i])
		{
			i++;
		}
		if (str[j] == a[i])
		{
			str[j] = b[i];
		}
	}
	return (str);
}
