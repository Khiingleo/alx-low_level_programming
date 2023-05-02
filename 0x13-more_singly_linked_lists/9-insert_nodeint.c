#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to the address of head of the linked list
 * @idx: the index of the node where new node should be added
 * @n: integer to be passed to the new node
 * Return: NULL if it failed
 *        else returns the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 1; i < idx; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
