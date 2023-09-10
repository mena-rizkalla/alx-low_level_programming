#include "hash_tables.h"

/**
 * key_index - Get the index at which key
 *
 * @key: the key to get the index of
 * @size: the size of thr array of thr hash table
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
