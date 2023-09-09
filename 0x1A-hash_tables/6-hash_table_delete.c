#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	hash_node_t *tmp;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];

		if (ptr == NULL)
			continue;

		if (ptr->next == NULL)
		{
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
		else
		{
			while (ptr != NULL)
			{
				tmp = ptr;
				ptr = ptr->next;

				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}

	free(ht->array);
	free(ht);
}
