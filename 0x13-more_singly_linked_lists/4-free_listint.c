#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the listint_list
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
