#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: first node of the linked list
 * @n: value of node
 *
 * Return: address of new node; NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		(*head) = node;

		return (*head);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		node->prev = current;
		current->next = node;
	}

	return (node);
}
