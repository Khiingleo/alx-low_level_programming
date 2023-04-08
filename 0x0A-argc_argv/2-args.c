#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
