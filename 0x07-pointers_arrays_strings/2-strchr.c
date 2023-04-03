#include "main.h"

/**
 *
 *
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);/*returns i + the first element of the string*/
	}
	return ('\0');
	
}
