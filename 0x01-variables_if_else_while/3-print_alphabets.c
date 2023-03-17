#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	char uppercase = 'A', lowercase = 'a';

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	return (0);
}
