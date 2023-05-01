#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * h: the listint_t list
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
