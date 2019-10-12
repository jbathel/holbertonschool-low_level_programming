#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: hash table to print
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;

	if (ht == NULL)
		printf("{}");

	for (index = 0; index < ht->size; index++)
		if (ht->array[index] != NULL)
			printf("{%s : %s}\n", ht->array[index]->key, ht->array[index]->value);
}
