#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table using the given format
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *comma = "";

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("%s'%s': '%s'", comma, current->key, current->value);
			comma = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
