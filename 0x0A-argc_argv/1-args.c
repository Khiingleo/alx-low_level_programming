#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments given
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
