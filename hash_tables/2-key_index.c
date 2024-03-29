#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: key of the hash table
 * @size: size of the array
 * Return: Returns the index at which the key/value pair should be stored in
 * the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
