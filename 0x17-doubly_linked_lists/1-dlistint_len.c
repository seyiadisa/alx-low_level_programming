#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a linked dlistint_t list
 * @h: first node of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
