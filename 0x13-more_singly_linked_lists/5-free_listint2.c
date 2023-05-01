#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to address of head
 *
 * Description: this code first checks if head is NULL, if itis then it returni
 * if its not then it goes into a loop and iterates until *head is equal
 * to NULL
 * ie (*head == NULL)
 * in this loop, it stores the next node in a temporary container,
 * then it frees the current node pointed by *head
 * then it updates head to point to the next node i.e (*head = list)
 * this means that since list is storing the next node, then head
 * takes in the value of list
 * then the loop continues until *head == NULL
 * after the loop ends, the head is set to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	*head = NULL;
}
