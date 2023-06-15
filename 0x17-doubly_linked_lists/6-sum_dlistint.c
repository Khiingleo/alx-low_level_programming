#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all data in a linked list
 * @head: pointer to the head of the list
 * Return: the sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
