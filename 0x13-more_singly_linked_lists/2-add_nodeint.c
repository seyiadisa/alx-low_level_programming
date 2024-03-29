#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a `listint_t` list
 * @head: pointer to first element of the list (you get the idea)
 * @n: integer
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *)malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
