#include "lists.h"

/**
 * print_dlistint - prints all the nodes of a dlist_int list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
