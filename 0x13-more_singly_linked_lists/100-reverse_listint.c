#include "lists.h"

/**
 * reverse_listint - reverses a `listint_t` list
 * @head: pointer to pointer pointing to a `listint_t` list
 *
 * Return: pointer to first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *tmpptr;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = (*head)->next;
		(*head)->next = NULL;
		tmpptr = ptr;

		while (ptr != NULL)
		{
			ptr = ptr->next;
			tmpptr->next = *head;
			*head = tmpptr;
			tmpptr = ptr;
		}
	}

	return (*head);
}
