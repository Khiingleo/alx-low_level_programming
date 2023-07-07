#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 0 on failure
 *          1 on success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	char *val_copy;
	unsigned long int index;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = val_copy;
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_copy);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0)
	}
	new->value = val_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
