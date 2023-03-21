#include "main.h"

/**
 *_isalpha - checks for alphabet character
 *@c: character to check
 *Return: Returns 1 if c is lower or uppercase and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
