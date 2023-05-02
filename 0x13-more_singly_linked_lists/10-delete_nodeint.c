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
	listint_t *temp, *temp2;
	unsigned int i;
	temp2 = *head;

	if (temp2 == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp2);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (temp2->next == NULL)
			return (-1);
		temp2 = temp2->next;
	}
	temp = temp2->next;
	temp2->next = temp->next;
	free(temp);
	return (1);
}
