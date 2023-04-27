#include "lists.h"

/**
 * list_len - returns the number of nodes in a linked list
 * @h: the list to check
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
