#include "main.h"

/**
 * get_endianness - checks the endiannness
 * Return: 0 if big endian
 *         1 if little endian
 */

int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
		return (1);
	return (0);
}
