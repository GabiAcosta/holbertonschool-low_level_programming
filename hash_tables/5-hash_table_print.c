#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	char *separator = "";

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s", separator);
			printf("'%s': '%s'", node->key, node->value);
			separator = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
