#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a `listint_int` list
 * @head: pointer to first element of the list (you get the idea)
 * @n: integer
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmpptr;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	if (ptr == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		for (tmpptr = *head; tmpptr->next != NULL; tmpptr = tmpptr->next)
			;
		tmpptr->next = ptr;
	}

	return (ptr);
}
