#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head of linked list
 * @n: value of linked list variable
 *
 * Return: address of the new node; NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		(*head) = new;
		(*head)->next = NULL;
		(*head)->prev = NULL;

		return (*head);
	}

	new->prev = NULL;
	new->next = *head;
	(*head)->prev = new;
	(*head) = new;

	return (new);
}
