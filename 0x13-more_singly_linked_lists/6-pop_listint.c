#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the listint_t list
 * Return: 0 if linked list is empty
 *       else returns the head node's data
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;

	*head = temp->next;
	free(temp);

	return (num);
}
