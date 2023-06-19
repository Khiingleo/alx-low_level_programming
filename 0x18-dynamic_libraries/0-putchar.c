#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a char
 * @c: char to print
 * Return: num of char printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
