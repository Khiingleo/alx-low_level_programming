#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list
 * @head: pointer to the head of the list
 * @index: the index of the node to return
 * Return: NULL if node doesn't exist
 *         else return the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
	}

	return (head);
}
