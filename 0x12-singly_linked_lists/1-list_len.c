#include "lists.h"

/**
 * list_len - returns the number of nodes in a linked list
 * @h: the list to check
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		num++;
		temp = temp->next;
	}
	return (num);
}
