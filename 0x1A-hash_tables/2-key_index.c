#include "hash_tables.h"

/**
 * key_index - return index of hashed key
 *
 * @key: key to hash and index
 * @size: size of hash table
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a;
	unsigned int b;

	a = hash_djb2(key);
	b = a % size;

	return (b);
}
