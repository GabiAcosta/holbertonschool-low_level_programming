#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key of the hash table
 * Return: Returns the value associated with the element, or NULL if
 * key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *str = NULL;
	hash_node_t node;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			return (ht->array[index]->value);
		}
		node = node->next;
	}
	return (NULL)
}
