#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @h: head of the list
 * Return: the length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
