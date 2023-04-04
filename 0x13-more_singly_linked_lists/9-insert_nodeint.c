#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to linked list
 * @idx: index of the list where the new node should be added.
 *	Index starts at 0
 * @n: data of new list node
 *
 * Return: address of new node; NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmpptr;
	unsigned int i;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	ptr->n = n;

	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		return (NULL);
	}
	else if (idx == 0)
	{
		tmpptr = (*head)->next;
		(*head)->next = ptr;
		ptr->next = tmpptr;
	}
	else
	{
		for (tmpptr = *head, i = 0; i < (idx - 1); tmpptr = tmpptr->next, i++)
		{
			if (tmpptr->next == NULL)
				return (NULL);
		}

		ptr->next = tmpptr->next;
		tmpptr->next = ptr;
	}

	return (ptr);
}
