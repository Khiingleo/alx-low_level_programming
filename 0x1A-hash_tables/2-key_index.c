#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: the key given to find the key/value pair
 * @size: the size of the array of the hash table
 * Return: index at with the key/value pair is stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
