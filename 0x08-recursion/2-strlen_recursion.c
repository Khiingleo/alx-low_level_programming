#include "main.h"

/**
 * _strlen_recursion - finds the length of a string using recursion
 * @s: the string to measure
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int length = 1;

	if (!*s)
		return (0);
	return (length + _strlen_recursion(s + 1));
}
