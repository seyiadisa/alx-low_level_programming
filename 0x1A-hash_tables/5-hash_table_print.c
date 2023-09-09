#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	const char *separator = "";

	if (ht == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];

			if (ptr == NULL)
				continue;
			else if (ptr->next == NULL)
				printf("%s'%s':'%s'", separator, ptr->key, ptr->value);
			else
			{
				while (ptr != NULL)
				{
					printf(", '%s':'%s'", ptr->key, ptr->value);
					ptr = ptr->next;
				}
			}

			separator = ", ";
		}
		printf("}\n");
	}
}
