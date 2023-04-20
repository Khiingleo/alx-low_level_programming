#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself
 * @argc: num of arguments given
 * @argv: the arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	int (*ptr)(int, char **) = main;
	unsigned char op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		op = *(unsigned char *)ptr;
		printf("%.2x", op);

		if (i == bytes - 1)
		{
			continue;
		}

		printf(" ");

		ptr++;
	}

	printf("\n");

	return (0);
}
