#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t
 * linked list
 * @head: pointer to the head of a linked list
 * Return: returns the sum of all the data(n) in a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
