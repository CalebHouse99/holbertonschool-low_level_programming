#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 *
 * @size: size of hash table array
 * Return: address of new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	hash_node_t **nodes;
	unsigned int i;

	if (size == 0)
		return (NULL);

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	nodes = malloc(sizeof(hash_node_t *) * size);
	if (nodes == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		nodes[i] = NULL;

	hashTable->size = size;
	hashTable->array = nodes;
	return (hashTable);
}