#include "hash_tables.h"

/**
 * hash_table_get - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 * @key: parameter
 *
 * Return: return value
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *wanted_node;

	if (key == NULL || ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}

	wanted_node = ht->array[index];

	while (wanted_node != NULL)
	{
		if (strcmp(wanted_node->key, key) == 0)
			return (wanted_node->value);
		wanted_node = wanted_node->next;
	}
	return (NULL);
}
