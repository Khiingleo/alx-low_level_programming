#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table using the given format
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int first_pair = 1;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (first_pair)
			{
				printf("'%s': '%s'", current->key, current->value);
				first_pair = 0;
			}
			else
			{
				printf(", '%s': '%s'", current->key, current->value);
			}
			current = current->next;
		}
	}
	printf("}\n");
}
