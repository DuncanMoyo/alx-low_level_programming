#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: the value of the key to search for
 * @size: the size
 * Return: the indx
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;

	return (idx);
}
