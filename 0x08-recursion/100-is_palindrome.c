#include "main.h"

/**
 * comp - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: starting from right of string, moving backwards
 * Return: 1 if palindrome and 0 if not
 */

int comp(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (comp(head + 1, tail - 1));

	return (0);
}

/**
 * length - find length of a string to access the last index
 * @s: string
 * Return: string length
 */


int length(char *s)
{
	if (!*s)
		return (0);
	return (1 + (length(s + 1)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */


int is_palindrome(char *s)
{
	int len = length(s);

	return (comp(s, (s + len - 1)));
}
