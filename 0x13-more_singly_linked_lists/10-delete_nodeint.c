#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given
 * index
 * @head: pointer to the address of head of the list
 * @index: the index given the should be deleted
 * Return: 1 if succeeded
 *         -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i;

	temp1 = *head;

	if (temp1 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->nexr;
		free(temp1);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (temp1->next == NULL)
			return (-1);
		temp1 = temp1->next;
	}
	temp = temp1->next;
	temp1->next = temp->next;
	free(temp);
	return (1);
}
