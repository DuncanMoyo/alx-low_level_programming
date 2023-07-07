#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table to add the key/value to
 * @key: key value to be added (cannot be an empty string)
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded or 0 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	char *data;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	data = strdup(value);

	if (data == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = data;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(data);
		return (0);
	}
	new_node->value = data;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
