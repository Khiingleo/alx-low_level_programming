#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - performs simple operations
 * @argc: number of arguments given
 * @argv: the arguments given
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	ptr = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(ptr) == NULL || ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ptr == '/' && num2 == 0) || (*ptr == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ptr)(num1, num2));

	return (0);
}
