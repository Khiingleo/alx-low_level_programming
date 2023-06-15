#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to the head of the list
 * @idx: index at which to insert the node
 * @n: integer value
 * Return: address of the new node at index
 *         NULL id not possible
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *current;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));/* adds node at the beginning*/

	current = *h;

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (add_dnodeint_end(h, n)); /*adds node at the end */

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = current;
	newnode->next = current->next;
	current->next->prev = newnode;
	current->next = newnode;

	return (newnode);

}
