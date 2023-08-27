#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: head of the list
 * @index: index of the node starting from 0
 *
 * Return: the node at index; NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; i < index && current != NULL; i++, current = current->next)
		;

	return (current);
}
