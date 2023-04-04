#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list `listint_t`
 * @h: pointer to linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for (ptr = h; ptr != NULL; ptr = ptr->next, count++)
			;
	}

	return (count);
}
