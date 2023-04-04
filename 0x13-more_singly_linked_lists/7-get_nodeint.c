#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a `listint_t` list
 * @head: pointer to list
 * @index: index of node starting at 0
 *
 * Return: node at index; NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		for (ptr = head, i = 0; i < index; ptr = ptr->next, i++)
		{
			if (ptr == NULL)
				return (NULL);
		}

		return (ptr);
	}
}
