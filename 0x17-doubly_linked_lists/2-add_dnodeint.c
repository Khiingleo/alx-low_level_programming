#include "lists.h"

/**
 * add_dnodeint - adds node at the beginning of the list
 * @head: pointer to the head of the list
 * @n: integer value
 * Return: address of new node
 *         NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	/* if list is empty */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
