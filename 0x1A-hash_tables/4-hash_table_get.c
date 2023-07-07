#include "hash_tables.h"

/**
 * hash_table_get - gets the value associated with a key from the hash table
 * @ht: the hash table
 * @key: the key to look for
 * Return: Value associated with the key
 *         NULL if key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
