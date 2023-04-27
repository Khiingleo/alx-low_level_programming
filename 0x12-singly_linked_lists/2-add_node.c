#include "lists.h"

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
