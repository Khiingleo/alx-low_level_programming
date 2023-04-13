#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory using malloc
 * @nmemb: the number of elements
 * @size: size of each array element
 * Return: pointer to string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; i < size * nmemb; i++)
	{
		((char *)ptr)[i] = 0;
		/*typecast void pointer to char pointer to access*/
		/*individual bytes of memory block*/
	}
	return (ptr);
}
