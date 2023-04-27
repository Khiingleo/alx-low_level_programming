#include "lists.h"

/**
 * add_node - adds a node to the beginning of list_t list
 * @head: pointer to the head of the link_t list
 * @str: string to be added to the list
 * Return: returns NULL if function fails
 *         else returns address to new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	len = strlen(str);
	new->str = strdup(str);
	/*account for if strdup fails*/
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
