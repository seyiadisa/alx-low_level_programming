#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the doubly linked list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}

	free(current);
}
