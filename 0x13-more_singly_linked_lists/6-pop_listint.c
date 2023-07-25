#include "lists.h"

/**
 * pop_listint - deletes the head node of a `listint_t` list
 * @head: pointer to head node
 *
 * Return: deleted node's data (n), 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	ptr = (*head)->next;
	n = (*head)->n;

	free(*head);

	*head = ptr;

	return (n);
}
