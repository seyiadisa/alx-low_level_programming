#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful; -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		return (1);
	}

	for (i = 0; i < index; i++, current = current->next)
	{
		if (current == NULL)
			return (-1);
	}

	current->prev->next = current->next;
	current->next->prev = current->prev;
	free(current);
	return (1);
}
