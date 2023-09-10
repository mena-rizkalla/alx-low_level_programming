#include "hash_tables.h"

/**
 * hash_table_delete - Function
 *
 * Description: 'A function'
 *
 * @ht: parameter
 *
 * Return: return value
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			temp = node;
			node = node->next;
			temp->next = NULL;
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
