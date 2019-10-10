#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the table
 * @key: key
 * @value: value
 * Return: 1 on Success 0 if Fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *node;

	if (strcmp(key, "") == 0 || !key)
		return (0);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	ht->array[index] = node;
	node->key = (char *)key;
	node->value = (char *)value;
	while (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
		node->key = (char *)key;
		node->value = (char *)value;
		return (1);
	}
	return (1);
}
