#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the head of a list
 * @index: index at which to retrieve node
 * Return: the nth node
 *         NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = index; n > 0; n--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
