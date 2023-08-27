#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to the address head of the list
 * @idx: index where the new node should be added
 * @n: data of the new node
 *
 * Return: address of the new node; NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (node == NULL)
		return (NULL);

	for (i = 0; i < idx; i++, current = current->next)
	{
		if (current == NULL)
		{
			free(node);
			return (NULL);
		}
	}

	node->n = n;
	node->prev = current->prev;
	node->next = current;
	current->prev->next = node;
	current->prev = node;

	return (node);
}
