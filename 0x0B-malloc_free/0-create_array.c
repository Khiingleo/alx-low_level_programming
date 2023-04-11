#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with specific char
 *
 * @size: size of array yo be printed
 * @c: character to be initailized
 * Return: NULL if size = 0, pointer to array if not
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;/*only positive values*/

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
