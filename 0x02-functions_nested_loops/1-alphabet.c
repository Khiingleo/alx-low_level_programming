#include "main.h"

/**
 * print_alphabet - prints the alphabet from a to z
 * Return: Return 0
 */

void print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
