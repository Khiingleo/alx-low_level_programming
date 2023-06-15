#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: pointer to the end of the list
 * @n: integer value
 * Return: the address of the new element
 *         NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	newnode->prev = tail;
	tail->next = newnode;
	return (newnode);
}
