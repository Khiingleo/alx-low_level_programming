#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * are identical if not return 0
 * @s1: first string
 * @s2: second string
 * Return: returns 1 if identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		int match = wildcmp(s1, s2 + 1);

		if (*s1 != '\0')
			match |= wildcmp(s1 + 1, s2);

		return (match);
	}

	if (*s1 != '\0' && (*s1 == *s2))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
