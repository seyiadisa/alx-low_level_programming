#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * @head: pointer to list
 * @index: index of node to delete
 *
 * Return: 1 if successful; -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *tmpptr;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	else
	{
		for (ptr = *head, i = 0; i < (index - 1); ptr = ptr->next, i++)
		{
			if (ptr->next == NULL)
				return (-1);
		}

		tmpptr = ptr->next->next;
		free(ptr->next);
		ptr->next = tmpptr;
	}

	return (1);
}
