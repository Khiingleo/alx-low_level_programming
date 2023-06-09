#include "main.h"

/**
 * _strcmp - compares the characters of two strings
 * @s1: first string argument
 * @s2: second string argument
 * Return: returns a positive i s1 is greater than s2
 * and a negative if s1 is less than s2. returns 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
