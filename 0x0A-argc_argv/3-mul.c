#include <stdio.h>
#include <stdlib.h>

/**
 * main - print result of multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if program recieves less or more than 2 arguments
 *         0 if program recieves 2 arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
