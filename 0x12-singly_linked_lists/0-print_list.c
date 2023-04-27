#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *temp = h;
	/*temporary pointer in order not to lose the h pointer*/

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		num++;
		temp = temp->next;
	}
	return (num);
}
