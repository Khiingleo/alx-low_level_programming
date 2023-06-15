#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at given index
 * @head: pointer to the head of the list
 * @index: index at which the node should be deleted
 * Return: 1 if succeeded
 *         -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	for (i = index; i > 0; i--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
