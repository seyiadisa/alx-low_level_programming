#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key. cannot be an empty string
 * @value: value associated with the key
 *
 * Return: 1 if succeeded; 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = malloc(sizeof(hash_node_t));
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (item == NULL)
		return (0);

	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
		item->next = NULL;
	}
	else
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}
