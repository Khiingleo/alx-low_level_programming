#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 * Return: NULL if function fails
 *         else return address to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int i, len = 0;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		/*iterate until temp becomes NULL*/
		temp->next = new;
	}
	return (new);
}
