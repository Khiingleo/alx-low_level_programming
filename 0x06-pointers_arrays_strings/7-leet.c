#include "main.h"

/**
 * leet - encodes into 1337 leet
 * @str: string to be encoded
 * Return: returns the string
 */

char *leet(char *str)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
